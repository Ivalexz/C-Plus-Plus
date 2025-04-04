#include <iostream>
#include "Spaces.h"

int main()
{
    setlocale(LC_ALL, "ukr");

    users_admin::create_users_arr();

    user_space::User user1("Іван", "ivan@gmail.com", 1, 1234567890);
    user_space::User user2("Дарія", 9876543210);
    user_space::User user3(2);
    user_space::User user4("Давид", 3, 5674839019);

    users_admin::add_users_arr(user1);
    users_admin::add_users_arr(user2);
    users_admin::add_users_arr(user3);
    users_admin::add_users_arr(user4);

    users_admin::show_users_arr();

    std::cout << std::endl << std::endl;

    users_admin::delete_user(user3);

    delete[] users_admin::users_arr;
}