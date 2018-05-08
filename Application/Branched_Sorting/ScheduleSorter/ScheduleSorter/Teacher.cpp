#include "Teacher.h"


std::string Teacher::get_name()
{
	return Name;
}

bool Teacher::get_specialist_status()
{
	return Specialist_Status;
}

void Teacher::set_name(std::string nm)
{
	Name = nm;
}

/*
Teacher* Teacher::create(Teacher_Type) const
{
	
}
*/


