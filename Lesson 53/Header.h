#pragma once
using namespace std;
class Car {

public:
	string brand;
	string model;
	int age;
	double price;

	Car() {
		brand = "no brand";
		model = "no model";
		age = 0;
		price = 0;
	}

	Car(string initBrand, string initModel) {
		brand = initBrand;
		model = initModel;
		age = 0;
		price = 0;
	}

	Car(string initBrand, string initModel, int initAge, double initPrice) {
		brand = initBrand;
		model = initModel;
		age = initAge;
		price = initPrice;
	}
	~Car() {

	}
	string getInfo() {
		return "Car: brand = " + brand
			+ "; model = " + model
			+ "; age = " + to_string(age)
			+ "; price = " + to_string(price);
	}
};
