#pragma once
#include "Teacher.h"
#include <string>

class Kindergarten_T : public Teacher
{
protected: 
	int max;

public:
	void print_teacher_info();
	Kindergarten_T() : Teacher(){}
};
