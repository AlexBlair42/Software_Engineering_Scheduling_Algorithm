#pragma once
#include "Teacher.h"

class Art_T : public Teacher
{
public:
	void print_teacher_info();

	const int artmin = 60;

	bool twoweekbreak = 0;
};