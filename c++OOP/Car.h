#ifndef CAR_H		
#define CAR_H		

#include <string>	

class Car {

private:											// Private access specifier
	std::string make;								// Data member
	std::string model;								// Data member
	int year;										// Data member

public:												// Public access specifier
	Car();											// Default constructor
	Car(const std::string& make, const std::string& model, int year); // Constructor
	~Car();											// Destructor
	Car(const Car& car);							// Copy constructor

	// Getters and setters
	std::string getMake() const;					// Getter. Accessor
	std::string getModel() const;					// Getter
	int getYear() const;							// Getter

	void setMake(const std::string& make);			// Setter. Mutator
	void setModel(const std::string& model);		// Setter
	void setYear(int year);							// Setter

	// Member functions
	void start() const;								// Member function
	void stop() const;								// Member function
	void accelerate() const;						// Member function

};

#endif												//	 CAR_H
