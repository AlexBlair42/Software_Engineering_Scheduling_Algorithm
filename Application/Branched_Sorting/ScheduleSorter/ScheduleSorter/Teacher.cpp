#include "Teacher.h"


std::string Teacher::get_name() const
{
	return Name;
}

bool Teacher::get_specialist_status() const
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


