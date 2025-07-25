#include <iostream>
#include "sqlite3.h"
#include <vector>
#include <string>

class Car {
private:
	std::string model, factory;
	int year;
	double price, discount;
public:
	explicit Car() {}
	explicit Car(std::string model, std::string factory, int year, double price, double discount)
		: model(model), factory(factory), year(year), price(price), discount(discount) {
	}

	double calc_discount() {
		return price * (discount / 100);
	}
	std::string get_model() {
		return model;
	}
	std::string get_factory() {
		return factory;
	}
	int get_year() {
		return year;
	}
	double get_price() {
		return price;
	}
	double get_discount() {
		return discount;
	}
	void set_model(std::string model) {
		this->model = model;
	}
	void set_factory(std::string factory) {
		this->factory = factory;
	}
	void set_year(int year) {
		this->year = year;
	}
	void set_price(double price) {
		this->price = price;
	}
	void set_discount(double discount) {
		this->discount = discount;
	}
};
int main()
{
	setlocale(LC_ALL, "ukr");

	std::vector<Car> cars;
	cars.push_back(Car("Model S", "Tesla", 2020, 79999.99, 10));
	cars.push_back(Car("Mustang", "Ford", 2021, 55999.99, 5));
	cars.push_back(Car("Civic", "Honda", 2019, 24999.99, 15));

	sqlite3* car_objects;
	int rc = sqlite3_open("DataBaseCar.db", &car_objects);
	if (rc) {
		std::cerr << "Неможливо відкрити базу даних: " << sqlite3_errmsg(car_objects) << std::endl;
	}
	else {
		std::cout << "Базу даних відкрито успішно" << std::endl;
	}
	if (sqlite3_exec(car_objects, "CREATE TABLE IF NOT EXISTS Cars("
		"ID	INTEGER PRIMARY KEY AUTOINCREMENT,"
		"Model TEXT,"
		"Factory TEXT,"
		"Year INTEGER,"
		"Price REAL,"
		"Discount REAL);", nullptr, nullptr, nullptr) == SQLITE_OK) 
	{
		std::cout << "Таблиця Cars створена успішно" << std::endl;
	}
	else{
		std::cerr << "Помилка створення таблиці: " << sqlite3_errmsg(car_objects) << std::endl;
	}

	for (auto& car : cars)
	{
		std::string add_car = "INSERT INTO Cars (Model, Factory, Year, Price, Discount)"
			"VALUES ('" + car.get_model() + "', '" + car.get_factory() + "', '" + std::to_string(car.get_year()) + "', '" + std::to_string(car.get_price()) + "', '" + std::to_string(car.get_discount()) + "');";
		if (sqlite3_exec(car_objects, add_car.c_str(), nullptr, nullptr, nullptr) == SQLITE_OK) {
			std::cout << "Машину додано" << std::endl;
		}
		else {
			std::cerr << "Помилка додавання об'єкту: " << sqlite3_errmsg(car_objects) << std::endl;
		}
	}

	std::string update_price_car1 = "UPDATE Cars SET PRICE = 74999.50 WHERE ID=1;";

	if (sqlite3_exec(car_objects, update_price_car1.c_str(), nullptr, nullptr, nullptr) == SQLITE_OK) {
		std::cout << "Машину 1 оновлено" << std::endl;
	}
	else {
		std::cerr << "Помилка оновлення об'єкту №1: " << sqlite3_errmsg(car_objects) << std::endl;
	}

	std::string update_price_car2 = "UPDATE Cars SET PRICE = 56999.99 WHERE ID=2;";

	if (sqlite3_exec(car_objects, update_price_car2.c_str(), nullptr, nullptr, nullptr) == SQLITE_OK) {
		std::cout << "Машину 2 оновлено" << std::endl;
	}
	else {
		std::cerr << "Помилка оновлення об'єкту №2: " << sqlite3_errmsg(car_objects) << std::endl;
	}

	std::string update_price_car3 = "UPDATE Cars SET PRICE = 23444.01 WHERE ID=3;";

	if (sqlite3_exec(car_objects, update_price_car3 .c_str(), nullptr, nullptr, nullptr) == SQLITE_OK) {
		std::cout << "Машину 3 оновлено" << std::endl;
	}
	else {
		std::cerr << "Помилка оновлення об'єкту №3: " << sqlite3_errmsg(car_objects) << std::endl;
	}

	sqlite3_close(car_objects);
}  