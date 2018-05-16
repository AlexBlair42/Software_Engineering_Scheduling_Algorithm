#pragma once
#include <string>

// In the process of refactoring to make factory method with parameters for grade
// Level and name as well as any constraints instead of multiple headers with identical code


// Website for factory Methods
//https://www.geeksforgeeks.org/design-patterns-set-2-factory-method/

/*
Parent class for teacher objects
*/

class Teacher
{

protected:

	// Member variables
	std::string Name;

	bool Status;

public:

	// Function signatures for teacher methods

	Teacher();

	~Teacher();

	virtual std::string get_name();

	virtual void set_name(std::string nm);

	virtual bool get_status();

	virtual void set_status(bool stat);

};