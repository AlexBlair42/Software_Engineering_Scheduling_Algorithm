#pragma once
#include "Teacher.h"

// ABLE
class Connor_Boyle : public Teacher
{
public:
	void Set_Grade_Level(int gl)
	{
		Grade_Level = gl;
	}

	int Get_Grade_Level()
	{
		return Grade_Level;
	}

	bool Get_Specialist_Status()
	{
		return Is_in_Specialist;
	}
};