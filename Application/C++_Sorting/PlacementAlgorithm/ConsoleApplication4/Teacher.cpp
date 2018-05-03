#include "Teacher.h"
#include <iostream>


int Teacher::Get_Grade_Level()
{
	return Grade_Level;
}

virtual int Teacher::Set_Grade_Level(int gl)
{
	Grade_Level = gl;
}

bool Teacher::Get_Specialist_Status()
{
	return status;
}
