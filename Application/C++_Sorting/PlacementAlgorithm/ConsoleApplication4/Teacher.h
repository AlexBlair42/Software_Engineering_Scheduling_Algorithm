#pragma once
#include <string>
/*
Parent class for teacher objects
*/
class Teacher
{
protected:
	bool Is_in_Specialist = false;
	int Grade_Level;
	std::string Name;
public:

	bool Get_Specialist_Status(bool Is_In_Specialist);

	std::string Get_Name(std::string Name);

	int Set_Grade_Level(int Grade_Level);

	int Get_Grade_Level();

	Teacher() {}

};