#pragma once

/*
Parent class for teacher objects
*/
class Teacher
{
protected:
	bool Is_in_Specialist = false;
	int Grade_Level;
public:

	void Get_Specialist_Status();

	void Set_Grade_Level();

	int Get_Grade_Level();

	Teacher() {}

};