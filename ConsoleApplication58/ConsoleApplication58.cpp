#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <thread>

class InfoBook {
private:
    std::string company_name, owner, phone_number, address, company_type;
public:
    explicit InfoBook(){}
    explicit InfoBook(std::string company_name, std::string owner, std::string phone_number, std::string address, std::string company_type) {
        this->company_name = company_name;
        this->owner = owner;
        this->phone_number = phone_number;
        this->address = address;
        this->company_type = company_type;
    }
    void save_to_file() {
        std::ofstream my_file("companies_info.txt", std::ios::app);
        my_file << company_name << std::endl;
        my_file << owner << std::endl;
        my_file << phone_number << std::endl;
        my_file << address << std::endl;
        my_file << company_type << std::endl;
        my_file << "================" << std::endl;
        my_file.close();
    }

    void show_info() {
		std::cout << "Назва фірми: " << company_name << std::endl;
		std::cout << "Власник: " << owner << std::endl;
		std::cout << "Телефон: " << phone_number << std::endl;
		std::cout << "Адреса: " << address << std::endl;
		std::cout << "Тип компанії: " << company_type << std::endl;
		std::cout << "================" << std::endl;
    }

    void find_by_name(std::string name) {
        bool found = false;
        std::string line;
        std::ifstream read_file("companies_info.txt");

        while (getline(read_file, line)) {
            std::string company_name = line;
            std::string owner, phone_number, address, company_type, line_between_companies;

            std::getline(read_file, owner);
            std::getline(read_file, phone_number);
            std::getline(read_file, address);
            std::getline(read_file, company_type);
            std::getline(read_file, line_between_companies);

            if (company_name == name) {
                InfoBook help_book(company_name, owner, phone_number, address, company_type);
				help_book.show_info();
				found = true;
            }
        }
		if (!found) {
			std::cout << "Компанію не знайдено" << std::endl;
		}
        read_file.close();
    }

    void find_by_owner(std::string entered_owner) {
		bool found = false;
        std::string line;
        std::ifstream read_file("companies_info.txt");

        while (getline(read_file, line)) {
            std::string company_name = line;
            std::string owner, phone_number, address, company_type, line_between_companies;

            std::getline(read_file, owner);
            std::getline(read_file, phone_number);
            std::getline(read_file, address);
            std::getline(read_file, company_type);
            std::getline(read_file, line_between_companies);

            if (owner == entered_owner) {
                InfoBook help_book(company_name, owner, phone_number, address, company_type);
                help_book.show_info();
				found = true;
            }
        }
        if (!found) {
            std::cout << "Компанію не знайдено" << std::endl;
        }
        read_file.close();
    }

    void find_by_phone(std::string entered_phone) {
		bool found = false;
        std::string line;
        std::ifstream read_file("companies_info.txt");

        while (getline(read_file, line)) {
            std::string company_name = line;
            std::string owner, phone_number, address, company_type, line_between_companies;

            std::getline(read_file, owner);
            std::getline(read_file, phone_number);
            std::getline(read_file, address);
            std::getline(read_file, company_type);
            std::getline(read_file, line_between_companies);

            if (phone_number == entered_phone) {
                InfoBook help_book(company_name, owner, phone_number, address, company_type);
                help_book.show_info();
				found = true;
            }
        }
        if (!found) {
            std::cout << "Компанію не знайдено" << std::endl;
        }
        read_file.close();
    }

    void get_all_companies() {
		bool found = false;

		std::string line;
		std::ifstream read_file("companies_info.txt");
		while (getline(read_file, line)) {
			std::string company_name = line;
			std::string owner, phone_number, address, company_type, line_between_companies;
			std::getline(read_file, owner);
			std::getline(read_file, phone_number);
			std::getline(read_file, address);
			std::getline(read_file, company_type);
			std::getline(read_file, line_between_companies);
            InfoBook help_book(company_name, owner, phone_number, address, company_type);
            help_book.show_info();
			found = true;
		}
        if (!found) {
			std::cout << "Ще немає жодної компанії" << std::endl;
		}
		read_file.close();
	}
    bool add_company() {
		std::string company_name, owner, phone_number, address, company_type;
		std::cout << "Введіть назву компанії: ";
		std::cin.ignore();
		std::getline(std::cin, company_name);
		std::cout << "Введіть ім'я власника: ";
		std::getline(std::cin, owner);
		std::cout << "Введіть номер телефону компанії: ";
		std::getline(std::cin, phone_number);
		std::cout << "Введіть адресу компанії: ";
		std::getline(std::cin, address);
		std::cout << "Введіть тип компанії: ";
		std::getline(std::cin, company_type);
		InfoBook new_company(company_name, owner, phone_number, address, company_type);
		new_company.save_to_file();
		return true;
    }
};

void menu() {
    InfoBook help_book;
    int users_choice;
    std::string search_item;

    while (true) {
        std::cout << "1 - пошук за назвою" << std::endl;
        std::cout << "2 - пошук за власником" << std::endl;
        std::cout << "3 - пошук за номером телефону компанії" << std::endl;
        std::cout << "4 - показати всі компанії" << std::endl;
        std::cout << "5 - додати нову компанію" << std::endl;
        std::cout << "6 - вийти" << std::endl;
        std::cout << "Ваш вибір: ";
        std::cin >> users_choice;

        if (users_choice == 1) {
            std::cout << "Введіть назву компанії: ";
            std::cin.ignore();
            std::getline(std::cin, search_item);

            std::thread t1(&InfoBook::find_by_name, &help_book, search_item);
            t1.join();
        }
        else if (users_choice == 2) {
            std::cout << "Введіть ім'я власника: ";
            std::cin.ignore();
            std::getline(std::cin, search_item);
            std::thread t2(&InfoBook::find_by_owner, &help_book, search_item);
            t2.join();
        }
        else if (users_choice == 3) {
            std::cout << "Введіть номер телефону компанії: ";
            std::cin.ignore();
            std::getline(std::cin, search_item);
            std::thread t3(&InfoBook::find_by_phone, &help_book, search_item);
            t3.join();
        }
        else if (users_choice == 4) {
            std::thread t4(&InfoBook::get_all_companies, &help_book);
            t4.join();
        }
        else if (users_choice == 5) {
            if (help_book.add_company()) {
                std::cout << "Компанію успішно додано!" << std::endl;
            }
            else {
                std::cout << "Помилка при додаванні компанії" << std::endl;
            }
        }
        else if (users_choice == 6) {
            std::cout << "Вихід..." << std::endl;
            break;
        }
        else {
            std::cout << "Невірний вибір!" << std::endl;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "ukr");

    menu();
}