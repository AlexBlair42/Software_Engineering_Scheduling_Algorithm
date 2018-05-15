#include "Teacher.h"

#include <string>

// Definitions for member functions

std::string Teacher::get_name()
{
	return Name;
}

bool Teacher::get_specialist_status()
{
	return Status;
}

void Teacher::set_name(std::string nm)
{
	Name = nm;
}

// Constructor that takes a name and status
Teacher::Teacher(std::string name, bool status)
{
	name = Name;
	status = Status;
}