#pragma once

class Product {
private:
	std::string name;
	int price;
	int quantity;
public:
	explicit Product() {}
	explicit Product(std::string name, int price, int quantity) {
		this->name = name;
		this->price = price;
		this->quantity = quantity;
	}
	std::string get_name() {
		return name;
	}
	double get_price() {
		return price;
	};
	int get_quantity() {
		return quantity;
	}
	void set_name(std::string name) {
		this->name = name;
	}
	void set_price(int price) {
		this->price = price;
	}
	void set_quantity(int quantity) {
		this->quantity = quantity;
	}
};