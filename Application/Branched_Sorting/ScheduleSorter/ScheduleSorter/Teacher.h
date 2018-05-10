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

	bool Specialist_Status = false;

	std::string Name;

public:

	std::string get_name();

	void set_name(std::string nm);

	bool get_specialist_status();

	Teacher* create_teacher();

};