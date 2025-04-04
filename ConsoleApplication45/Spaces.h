#pragma once
#include <iostream>

namespace user_space {
    class User {
    private:
        std::string name, email;
        int ID = 0, phone = 0;
    public:
        explicit User() {}
        explicit User(int ID) {
            this->ID = ID;
        }
        explicit User(std::string name, int phone) {
            this->name = name;
            this->phone = phone;
        }
        explicit User(std::string name, int ID, int phone) {
            this->name = name;
            this->ID = ID;
            this->phone = phone;
        }
        explicit User(std::string name, std::string email, int ID, int phone) {
            this->name = name;
            this->email = email;
            this->ID = ID;
            this->phone = phone;
        }
        std::string get_name() {
            if (name.empty()) {
                return " - ";
            }
            return name;
        }
        std::string get_email() {
            if (email.empty()) {
                return " - ";
            }
            return email;
        }
        int get_ID() {
            return ID;
        }

        int get_phone() {
            return phone;
        }
    };
}

namespace users_admin {
    int user_count = 0;
    int index = 0;
    user_space::User* users_arr = nullptr;

    int count_of_users() {
        if (user_count == 0) {
            std::cout << "Введіть кількість користувачів: ";
            std::cin >> user_count;
        }
        return user_count;
    }

    void create_users_arr() {
        int size = count_of_users();
        users_arr = new user_space::User[size];
    }

    void show_users_arr() {
        for (size_t i = 0; i < index; i++)
        {
            std::cout << "    User " << i + 1 << ":" << std::endl;
            std::cout << "Ім'я: " << users_arr[i].get_name() << std::endl;
            std::cout << "ID: " << users_arr[i].get_ID() << std::endl;
            std::cout << "Номер тел.: " << users_arr[i].get_phone() << std::endl;
            std::cout << "Емейл: " << users_arr[i].get_email() << std::endl;
        }
    }

    void add_users_arr(user_space::User& obj) {
        if (index < user_count) {
            users_arr[index] = obj;
            index++;
        }
        else {
            std::cout << "Помилка: масив заповнено" << std::endl;
        }
    }

    void delete_user(user_space::User& obj) {
        for (size_t i = 0; i < index; i++)
        {
            if (obj.get_ID() == users_arr[i].get_ID() && obj.get_phone() == users_arr[i].get_phone()) {
                for (int j = i; j < index - 1; j++) {
                    users_arr[j] = users_arr[j + 1];
                }
                index--;
                std::cout << "Користувача з ID " << obj.get_ID()<<" за номером телефону "<<obj.get_phone() << " видалено" << std::endl;
                return;
            }
        }
        std::cout << "Користувача не знайдено" << std::endl;
    }
}