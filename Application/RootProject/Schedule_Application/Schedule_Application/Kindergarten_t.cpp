#include "Kindergarten_T.h"
#include <iostream>
#include <cmath>

void Kindergarten_T::print_teacher_info()
{
	std::cout << "This is a Kindergarten Teacher!" << std::endl;
}

Kindergarten_T::Kindergarten_T : Teacher(std::string name, bool status)
{
	Name = name;
	Status = status;
}

