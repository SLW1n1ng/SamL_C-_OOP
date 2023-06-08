#include "Car.h"
#include <iostream>
using namespace std;

int main() {
	// Create a Car object
	Car* myCar = new Car("Toyota", "Camry", 2022);//Using default constructor
	Car defaultCar;								//Using overloaded constructor
	Car copiedCar(*myCar);// Create a new Car object and initialize it using the copy constructor


	// Display Default constructor car information
	cout << "Default Car Information:" << endl;
	cout << "Make: " << myCar->getMake() << endl;
	cout << "Model: " << myCar->getModel() << endl;
	cout << "Year: " << myCar->getYear() << endl;
	cout << endl;

	// Display copied car information
	std::cout << "Copied Car Information:" << std::endl;
	std::cout << "Make: " << copiedCar.getMake() << std::endl;
	std::cout << "Model: " << copiedCar.getModel() << std::endl;
	std::cout << "Year: " << copiedCar.getYear() << std::endl;
	std::cout << std::endl;
	
	// Display default car information
	cout << "Overloaded Car Information:" << endl;
	cout << "Make: " << defaultCar.getMake() << endl;
	cout << "Model: " << defaultCar.getModel() << endl;
	cout << "Year: " << defaultCar.getYear() << endl;
	cout << endl;

	// Perform car operations
	myCar->start();
	myCar->accelerate();
	myCar->stop();

	// Update car information
	myCar->setMake("Honda");
	myCar->setModel("Accord");
	myCar->setYear(2024);

	// Display updated car information
	cout << "Updated Car Information:" << endl;
	cout << "Make: " << myCar->getMake() << endl;
	cout << "Model: " << myCar->getModel() << endl;
	cout << "Year: " << myCar->getYear() << endl;
	cout << endl;

	delete myCar;   // Delete the Car object

	return 0;
}

