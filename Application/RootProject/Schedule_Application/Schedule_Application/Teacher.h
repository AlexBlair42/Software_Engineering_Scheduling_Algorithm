#pragma once
#include <string>

// In the process of refactoring to make factory method with parameters for grade
// Level and name as well as any constraints instead of multiple headers with identical code


// Website for factory Methods
//https://www.geeksforgeeks.org/design-patterns-set-2-factory-method/

/*
Parent class for teacher objects
*/

/*
enum Teacher_Types
{
	Kindergarten, FirstGrade, SecondGrade, ThirdGrade, FourthGrade, FifthGrade, SixthGrade
};
*/

class Teacher
{

protected:

	std::string Name;

	bool Status;

public:

	Teacher(std::string name, bool status);

	std::string get_name();

	void set_name(std::string nm);

	bool get_specialist_status();

	Teacher* create_teacher();

};