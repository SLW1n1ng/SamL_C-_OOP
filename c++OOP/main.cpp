#include "Car.h"
#include <iostream>

int main() {
	// Create a Car object
	Car myCar("Toyota", "Camry", 2022);	//Using overload constructor
	Car defaultCar;									//Using default constructor
	Car copiedCar(myCar);							// Create a copy Car object 

	// Display overload constructor car information
	std::cout << "Overload Car Information:" << std::endl;
	std::cout << "Make: " << myCar.getMake() << std::endl;
	std::cout << "Model: " << myCar.getModel() << std::endl;
	std::cout << "Year: " << myCar.getYear() << std::endl;
	std::cout << std::endl;

	// Display copied car information
	std::cout << "Copied Car Information:" << std::endl;
	std::cout << "Make: " << copiedCar.getMake() << std::endl;
	std::cout << "Model: " << copiedCar.getModel() << std::endl;
	std::cout << "Year: " << copiedCar.getYear() << std::endl;
	std::cout << std::endl;

	// Display default car information
	std::cout << "Default Car Information:" << std::endl;
	std::cout << "Make: " << defaultCar.getMake() << std::endl;
	std::cout << "Model: " << defaultCar.getModel() << std::endl;
	std::cout << "Year: " << defaultCar.getYear() << std::endl;
	std::cout << std::endl;

	// Perform car operations
	std::cout << "Performing car operations:" << std::endl;
	myCar.start();
	myCar.accelerate();
	myCar.stop();
	std::cout << std::endl;

	// Update car information
	myCar.setMake("Honda");
	myCar.setModel("Accord");
	myCar.setYear(2024);

	// Display updated car information
	std::cout << "Updated Car Information:" << std::endl;
	std::cout << "Make: " << myCar.getMake() << std::endl;
	std::cout << "Model: " << myCar.getModel() << std::endl;
	std::cout << "Year: " << myCar.getYear() << std::endl;
	std::cout << std::endl;

	return 0;
}

