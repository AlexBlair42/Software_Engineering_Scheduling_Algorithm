#include "Teacher.h"

#include <string>

// Definitions for member functions

std::string Teacher::get_name()
{
	return Name;
}

bool Teacher::get_status()
{
	return Status;
}

void Teacher::set_name(std::string nm)
{
	Name = nm;
}

void Teacher::set_status(bool stat)
{
	Status = stat;
}

// Constructor that takes a name and status
Teacher::Teacher()
{

}

// Destructor
Teacher::~Teacher(){}