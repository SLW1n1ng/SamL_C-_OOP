#include "Car.h"
#include <iostream>

Car::Car() {
	make = "Unknown";			// If no parameters are passed, these values will be used
	model = "Unknown";
	year = 0;
}

Car::Car(const std::string& make, const std::string& model, int year) : make(make), model(model), year(year) {}

Car::~Car() { std::cout << "Car has been destroyed!" << std::endl; }		// Destructor

Car::Car(const Car& car) {													// Copy constructor
	this->make = car.make;
	this->model = car.model;
	this->year = car.year;
}

// Getters 
std::string Car::getMake() const { return make; }							// Getter
std::string Car::getModel() const { return model; }							// Getter
int Car::getYear() const { return year; }									// Getter

// Setters
void Car::setMake(const std::string& make) { this->make = make; }			// Setter
void Car::setModel(const std::string& model) { this->model = model; }		// Setter
void Car::setYear(int year) {												// Setter
	if (year >= 1886 && year <= 2023)// If the year is between 1886 and 2023, set the year
	{
		this->year = year;
	}
	else
	{
		this->year = 0;				// Otherwise, set the year to 0
	}
}

// Member functions
void Car::start() const { std::cout << "Car started" << std::endl; }			
void Car::stop() const { std::cout << "Car stopped" << std::endl; }				
void Car::accelerate() const { std::cout << "Car accelerated" << std::endl; }	