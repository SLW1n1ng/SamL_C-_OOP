#include "Car.h"
#include <iostream>

Car::Car() {
	make = "Unknown";			// If no parameters are passed, these values will be used
	model = "Unknown";
	year = 0;
	std::cout << "Default constructor called" << std::endl;	
}

Car::Car(const std::string& make, const std::string& model, int year) {		// Constructor
	this->make = make;			//this->make is the member variable, make is the parameter. 
	this->model = model;
	this->year = year;
	std::cout << "Overloaded constructor called" << std::endl << std::endl;	
}

Car::~Car() { std::cout << "Car has been destroyed!" << std::endl; }		// Destructor

// Getters 
std::string Car::getMake() const { return make; }							// Getter
std::string Car::getModel() const { return model; }							// Getter
int Car::getYear() const { return year; }									// Getter

// Setters
void Car::setMake(const std::string& make) { this->make = make; }			// Setter
void Car::setModel(const std::string& model) { this->model = model; }		// Setter
void Car::setYear(int year) {												// Setter
	if (year >= 1886 && year <= 2023)
	{
		this->year = year;
	}
	else
	{
		this->year = 0;
	}
}

// Member functions
void Car::start() const { std::cout << "Car started" << std::endl << std::endl; }			// Member function
void Car::stop() const { std::cout << "Car stopped" << std::endl << std::endl; }			// Member function
void Car::accelerate() const { std::cout << "Car accelerated" << std::endl << std::endl; }	// Member function