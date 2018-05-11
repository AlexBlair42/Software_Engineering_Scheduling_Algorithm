#pragma once
#include "Teacher.h"

class Kindergarten_T : public Teacher
{
protected: 
	int max;

public:
	void print_teacher_info();
	Kindergarten_T(std::string name, bool status);
};
