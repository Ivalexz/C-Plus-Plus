#include <fstream>
#include <iostream>
#include <cassert>
#include <string>
#include <ctime>
#include <vector>

void log(std::string op_type, int time, double sum, std::string status) {
	std::ofstream log_file("log.txt", std::ios::app);
	if (log_file.is_open()) {
		log_file << "[" << time << "] " << op_type << " sum: " << sum << " status: " << status << std::endl;
	}
	else {
		std::cerr << "Неможливо відкрити файл" << std::endl;
	}
}

class BankAccount {
private:
	double balance;
	int id;
public:
	explicit BankAccount(double balance, int id) {
		this->balance = balance;
		this->id = id;
		assert(balance >= 0);
	}; 
	int get_id() {
		return id;
	}
	int get_curr_time() {
		time_t now = time(nullptr);
		return static_cast<int>(now);
	}
	void deposit(double sum) {
		if (sum <= 0) {
			std::cout << "Сума поповнення не може бути від'ємною, або рівною нулю" << std::endl;
			log("депозит", get_curr_time(), sum, "неуспішно: сума від'ємна, або дорівнює нулю");
		}
		else {
			balance += sum;
			std::cout << "Баланс після поповнення: " << balance << std::endl;
			log("депозит", get_curr_time(), sum, "успішно");
		}
	}
	void withdraw(double sum) {
		if (sum <= 0) {
			std::cout << "Сума зняття не може бути від'ємною, або рівною нулю" << std::endl;
			log("зняття", get_curr_time(), sum, "неуспішно: сума від'ємна, або дорівнює нулю");
		}
		else {
			if (sum > balance) {
				std::cout << "Недостатньо коштів на рахунку" << std::endl;
				log("зняття", get_curr_time(), sum, "неуспішно: недостатньо коштів");
			}
			else {
				balance -= sum;
				std::cout << "Баланс після зняття: " << balance << std::endl;
				log("зняття", get_curr_time(), sum, "успішно");
			}
		}
	}
	void transferTo(int other_id, double sum, std::vector<BankAccount>& bank) {
		if (sum <= 0 ) {
			std::cout << "Сума переказу не може бути від'ємною, або рівною нулю" << std::endl;
			log("переказ", get_curr_time(), sum, "неуспішно: сума від'ємна, або дорівнює нулю");
		}
		else if (sum > 10000) {
			std::cout << "Сума переказу не може перевищувати 10000" << std::endl;
			log("переказ", get_curr_time(), sum, "неуспішно: сума перевищує ліміт");
		}
		else {
			if (id == other_id) {
				std::cout << "Неможливо переказати на той же рахунок" << std::endl;
				log("переказ", get_curr_time(), sum, "неуспішно: переказ на той же рахунок");
			}
			else {
				for (auto& acc : bank)
				{
					if (acc.get_id() == other_id) {
						if (sum > balance) {
							std::cout << "Недостатньо коштів на рахунку для переказу" << std::endl;
							log("переказ", get_curr_time(), sum, "неуспішно: недостатньо коштів");
						}
						else {
							balance -= sum;
							acc.balance += sum;
							std::cout << "Баланс після переказу: " << balance << std::endl;
							log("переказ", get_curr_time(), sum, "успішно");
						}
						return;
					}
				}
				std::cout << "Рахунок з ID " << other_id << " не знайдено" << std::endl;
				log("переказ", get_curr_time(), sum, "неуспішно: рахунок не знайдено");
			}
		}
	}
	void show_balance() {
		std::cout << "Поточний баланс: " << balance << std::endl;
		log("перегляд балансу", get_curr_time(), balance, "успішно");
	}
};


int main()
{
	setlocale(LC_ALL, "ukr");

	BankAccount acc1(1000, 1040);
	BankAccount acc2(500, 2345);
	BankAccount acc3(1400, 3456);

	std::vector<BankAccount> bank = { acc1, acc2, acc3 };

	std::cout << "Початкові баланси: " << std::endl;
	acc1.show_balance();
	acc2.show_balance();
	acc3.show_balance();

	std::cout <<std::endl<< "Поповнення: " << std::endl;
	acc1.deposit(200);
	acc1.deposit(-50);
	acc1.deposit(0);

	std::cout << std::endl << "Зняття: " << std::endl;
	acc1.withdraw(100);
	acc1.withdraw(-30);
	acc1.withdraw(5000);


	std::cout << std::endl << "Переказ:" << std::endl;
	acc1.transferTo(2345, 300, bank);
	acc1.transferTo(1040, 100, bank);
	acc1.transferTo(9999, 100, bank);
	acc1.transferTo(2345, 15000, bank);
	acc1.transferTo(2345, 2000, bank);

	std::cout << std::endl << "Баланси піля операцій:" << std::endl;
	acc1.show_balance();
	acc2.show_balance();
	acc3.show_balance();
}