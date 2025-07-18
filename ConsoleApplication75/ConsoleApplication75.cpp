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
		std::cerr << "��������� ������� ����" << std::endl;
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
			std::cout << "���� ���������� �� ���� ���� ��'�����, ��� ����� ����" << std::endl;
			log("�������", get_curr_time(), sum, "��������: ���� ��'����, ��� ������� ����");
		}
		else {
			balance += sum;
			std::cout << "������ ���� ����������: " << balance << std::endl;
			log("�������", get_curr_time(), sum, "������");
		}
	}
	void withdraw(double sum) {
		if (sum <= 0) {
			std::cout << "���� ������ �� ���� ���� ��'�����, ��� ����� ����" << std::endl;
			log("������", get_curr_time(), sum, "��������: ���� ��'����, ��� ������� ����");
		}
		else {
			if (sum > balance) {
				std::cout << "����������� ����� �� �������" << std::endl;
				log("������", get_curr_time(), sum, "��������: ����������� �����");
			}
			else {
				balance -= sum;
				std::cout << "������ ���� ������: " << balance << std::endl;
				log("������", get_curr_time(), sum, "������");
			}
		}
	}
	void transferTo(int other_id, double sum, std::vector<BankAccount>& bank) {
		if (sum <= 0 ) {
			std::cout << "���� �������� �� ���� ���� ��'�����, ��� ����� ����" << std::endl;
			log("�������", get_curr_time(), sum, "��������: ���� ��'����, ��� ������� ����");
		}
		else if (sum > 10000) {
			std::cout << "���� �������� �� ���� ������������ 10000" << std::endl;
			log("�������", get_curr_time(), sum, "��������: ���� �������� ���");
		}
		else {
			if (id == other_id) {
				std::cout << "��������� ���������� �� ��� �� �������" << std::endl;
				log("�������", get_curr_time(), sum, "��������: ������� �� ��� �� �������");
			}
			else {
				for (auto& acc : bank)
				{
					if (acc.get_id() == other_id) {
						if (sum > balance) {
							std::cout << "����������� ����� �� ������� ��� ��������" << std::endl;
							log("�������", get_curr_time(), sum, "��������: ����������� �����");
						}
						else {
							balance -= sum;
							acc.balance += sum;
							std::cout << "������ ���� ��������: " << balance << std::endl;
							log("�������", get_curr_time(), sum, "������");
						}
						return;
					}
				}
				std::cout << "������� � ID " << other_id << " �� ��������" << std::endl;
				log("�������", get_curr_time(), sum, "��������: ������� �� ��������");
			}
		}
	}
	void show_balance() {
		std::cout << "�������� ������: " << balance << std::endl;
		log("�������� �������", get_curr_time(), balance, "������");
	}
};


int main()
{
	setlocale(LC_ALL, "ukr");

	BankAccount acc1(1000, 1040);
	BankAccount acc2(500, 2345);
	BankAccount acc3(1400, 3456);

	std::vector<BankAccount> bank = { acc1, acc2, acc3 };

	std::cout << "�������� �������: " << std::endl;
	acc1.show_balance();
	acc2.show_balance();
	acc3.show_balance();

	std::cout <<std::endl<< "����������: " << std::endl;
	acc1.deposit(200);
	acc1.deposit(-50);
	acc1.deposit(0);

	std::cout << std::endl << "������: " << std::endl;
	acc1.withdraw(100);
	acc1.withdraw(-30);
	acc1.withdraw(5000);


	std::cout << std::endl << "�������:" << std::endl;
	acc1.transferTo(2345, 300, bank);
	acc1.transferTo(1040, 100, bank);
	acc1.transferTo(9999, 100, bank);
	acc1.transferTo(2345, 15000, bank);
	acc1.transferTo(2345, 2000, bank);

	std::cout << std::endl << "������� ��� ��������:" << std::endl;
	acc1.show_balance();
	acc2.show_balance();
	acc3.show_balance();
}