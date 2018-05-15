#pragma once
#include "Teacher.h"
#include <string>

class Kindergarten_T : public Teacher
{
protected: 
	int max;

public:
	using Teacher::Teacher;
	void print_teacher_info();
	Kindergarten_T() : Teacher(){}
};
