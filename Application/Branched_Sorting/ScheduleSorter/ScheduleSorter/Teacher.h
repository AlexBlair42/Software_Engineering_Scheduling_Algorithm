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

	virtual std::string get_name() const = 0;

	virtual void set_name(std::string nm);

	virtual bool get_specialist_status() const = 0;

	//virtual Teacher* create(Teacher_Type) const = 0;

	/*
	Teacher(bool Is_In_Specialist, std::string Name)
	{
	Is_In_Specialist = this -> Is_in_Specialist;
	Name = this -> Name;
	}
	*/
};