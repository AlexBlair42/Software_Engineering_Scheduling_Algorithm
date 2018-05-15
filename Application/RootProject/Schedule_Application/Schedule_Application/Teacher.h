#pragma once
#include <string>

// In the process of refactoring to make factory method with parameters for grade
// Level and name as well as any constraints instead of multiple headers with identical code


// Website for factory Methods
//https://www.geeksforgeeks.org/design-patterns-set-2-factory-method/

/*
Parent class for teacher objects
*/


enum Teacher_Types
{
	Kindergarten, FirstGrade, SecondGrade, ThirdGrade, FourthGrade, FifthGrade, SixthGrade
};


class Teacher
{

protected:

	// Member variables
	std::string Name;

	bool Status;

public:

	// Function signatures for teacher methods

	Teacher(std::string name, bool status);

	Teacher() = default;

	~Teacher();

	std::string get_name() = 0;

	void set_name(std::string nm) = 0;

	bool get_specialist_status() = 0;

	static Teacher* create_teacher(Teacher_Types);

};