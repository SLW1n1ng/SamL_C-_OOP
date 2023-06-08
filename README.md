Car Class Project

Description:
This project implements a Car class in C++ to represent cars with their make, model, and year. It provides functionality to initialize car objects, retrieve and modify their attributes, and perform car operations like starting, stopping, and accelerating.

Files:
- car.h: Header file containing the Car class declaration.
- car.cpp: Source file containing the Car class member function definitions.
- main.cpp: Main program file showcasing the usage of the Car class.

Usage:
1. Ensure you have a C++ compiler installed on your system.
2. Using Visual Studio Code, compile the program:
3. Run the program by pressing F5 or using the Debug menu.

Functionality:
- The Car class has two constructors:
  - Default constructor: Creates a car object with unknown make, model, and year.
  - Overloaded constructor: Allows specifying the make, model, and year of the car.
- Accessor methods (getters) are provided to retrieve the make, model, and year of a car.
- Mutator methods (setters) are provided to modify the make, model, and year of a car.
- The setYear() setter performs validation to ensure the year is within a valid range (1886 to 2023).
- Member functions are available to start, stop, and accelerate the car.
- The Car class also has a destructor to clean up resources when a car object is destroyed.

Examples:
1. Creating a car object using the default constructor:
   Car defaultCar;
   cout << "Make: " << defaultCar.getMake() << endl;
   cout << "Model: " << defaultCar.getModel() << endl;
   cout << "Year: " << defaultCar.getYear() << endl;

2. Creating a car object using the overloaded constructor:
   Car myCar("Toyota", "Camry", 2022);
   cout << "Make: " << myCar.getMake() << endl;
   cout << "Model: " << myCar.getModel() << endl;
   cout << "Year: " << myCar.getYear() << endl;

3. Modifying the car attributes:
   myCar.setMake("Honda");
   myCar.setModel("Accord");
   myCar.setYear(2021);

4. Performing car operations:
   myCar.start();
   myCar.accelerate();
   myCar.stop();

Author:
Sam Lulua

License:
Visual Studio

