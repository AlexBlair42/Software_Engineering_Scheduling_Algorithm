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

	bool Get_Specialist_Status()
	{
		return Is_in_Specialist;
	}

	std::string Get_Name(std::string Name)
	{
		return Name;
	}

	int Set_Grade_Level(int gl)
	{
		Grade_Level = gl;
	}

	int Get_Grade_Level()
	{
		return Grade_Level;
	}

	Teacher(int Grade_Level, bool Is_In_Specialist, std::string Name) 
	{
		Grade_Level = this -> Grade_Level;
		Is_In_Specialist = this -> Is_in_Specialist;
		Name = this -> Name;
	}

};