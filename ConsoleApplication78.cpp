#include <iostream>
#include "sqlite3.h"
#include <vector>
#include <string>
#include "Products.h"

int count_callback(void* number, int argc, char** argv, char** azColName) {
	int* num = static_cast<int*>(number);
	*num = atoi(argv[0]); 
	return 0;
}

int callback(void* number, int argc, char** argv, char** azColName) {
	for (size_t i = 0; i < argc; i++)
	{
		std::cout << azColName[i] << ": " << (argv[i] ? argv[i] : "NULL") << std::endl;
	}
	return 0;
}

void check_before_add(sqlite3* db, Product prod) {
	int counter = 0;
	std::string querry_check = "SELECT COUNT(*) FROM Products WHERE NAME = '" + prod.get_name() + "';";

	if (sqlite3_exec(db, querry_check.c_str(), count_callback, &counter, nullptr) != SQLITE_OK) {
		std::cerr << "Помилка виконання запиту: " << sqlite3_errmsg(db) << std::endl;
		return;
	}
	else {
		std::cout << "Перевірка наявності продукту виконана успішно" << std::endl;
	}

	if (counter > 0) {
		std::cout << "Продукт вже існує в базі даних" << std::endl;
		std::cout << "Оновлення інформації" << std::endl;
		std::string update_obj = "UPDATE Products SET PRICE = " + std::to_string((int)prod.get_price()) +
			", QUANTITY = " + std::to_string(prod.get_quantity()) +
			" WHERE NAME = '" + prod.get_name() + "';";
		if (sqlite3_exec(db, update_obj.c_str(), nullptr, nullptr, nullptr) == SQLITE_OK) {
			std::cout << "Інформацію про продукт оновлено успішно" << std::endl;
		}
		else {
			std::cerr << "Помилка оновлення інформації: " << sqlite3_errmsg(db) << std::endl;
		}
	}
	else {
		std::cout << "Продукт відсутній в базі даних" << std::endl;
		std::cout << "Додамо продукт до бази даних" << std::endl;

		std::string add_obj = "INSERT INTO Products(NAME, PRICE, QUANTITY) "
			"VALUES('" + prod.get_name() + "', " + std::to_string((int)prod.get_price()) +
			", " + std::to_string(prod.get_quantity()) + ");";

		if (sqlite3_exec(db, add_obj.c_str(), nullptr, nullptr, nullptr) == SQLITE_OK) {
			std::cout << "Об'єкт додано успішно" << std::endl;
		}
		else {
			std::cerr << "Помилка додавання об'єкту: " << sqlite3_errmsg(db) << std::endl;
		}

	}
}

void delete_where_quantity0(sqlite3* db) {
	std::string querry_delete = "DELETE FROM Products WHERE QUANTITY = 0;";
	if (sqlite3_exec(db, querry_delete.c_str(), nullptr, nullptr, nullptr) == SQLITE_OK) {
		std::cout << "Продукти з кількістю 0 видалено успішно" << std::endl;
	}
	else {
		std::cerr << "Помилка видалення продуктів: " << sqlite3_errmsg(db) << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "ukr");

	std::vector<Product> products{
		Product("Яблуко", 94, 100),
		Product("Банан", 58, 150),
		Product("Ківі", 120, 0),
		Product("Апельсин", 90, 80),
		Product("Груша", 139, 50),
	};

	sqlite3* db;
	int rc = sqlite3_open("shop.db", &db);
	if (rc) {
		std::cerr << "Неможливо відкрити базу даних: " << sqlite3_errmsg(db) << std::endl;
	}
	else {
		std::cout << "Базу даних відкрито успішно" << std::endl;
	}


	if(sqlite3_exec(db,
		"CREATE TABLE IF NOT EXISTS Products("
		"ID INTEGER PRIMARY KEY AUTOINCREMENT,"
		"NAME TEXT,"
		"PRICE INTEGER,"
		"QUANTITY INTEGER"
		");", nullptr, nullptr, nullptr) == SQLITE_OK)
	{
		std::cout << "Таблиця створена успішно" << std::endl;
	}
	else {
		std::cerr << "Помилка створення таблиці: " << sqlite3_errmsg(db) << std::endl;
	}

	for (auto& product : products)
	{
		check_before_add(db,product);
	}



	std::string querry_select = "SELECT * FROM Products; ";

	if (sqlite3_exec(db, querry_select.c_str(), callback, NULL, NULL) == SQLITE_OK) {
		std::cout << "Дані вибрано успішно" << std::endl;
	}
	else {
		std::cerr << "Помилка вибірки даних: " << sqlite3_errmsg(db) << std::endl;
	}

	delete_where_quantity0(db);

	if (sqlite3_exec(db, querry_select.c_str(), callback, NULL, NULL) == SQLITE_OK) {
		std::cout << "Дані вибрано успішно" << std::endl;
	}
	else {
		std::cerr << "Помилка вибірки даних: " << sqlite3_errmsg(db) << std::endl;
	}

	sqlite3_close(db);

	return 0;
}
