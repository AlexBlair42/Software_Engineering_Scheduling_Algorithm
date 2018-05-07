#pragma once
#include <string>

// In the process of refactoring to make factory method with parameters for grade
// Level and name as well as any constraints instead of multiple headers with identical code


// Website for factory Methods
//https://www.geeksforgeeks.org/design-patterns-set-2-factory-method/
enum Teacher_Type
{
	Kindergarten, First_Grade, Second_Grade, Third_Grade, Fourth_Grade, Fifth_Grade, Sixth_Grade
};

/*
Parent class for teacher objects
*/
class Teacher
{
protected:

	bool Is_in_Specialist = false;

	std::string Name;

public:

	virtual std::string Get_Name() const = 0;

	virtual void Set_Name(std::string nm) const = 0;

	virtual bool Get_Specialist_Status() const = 0;

	virtual Teacher* Create(Teacher_Type) const = 0;

	/*
	Teacher(bool Is_In_Specialist, std::string Name) 
	{
		Is_In_Specialist = this -> Is_in_Specialist;
		Name = this -> Name;
	}
	*/
};