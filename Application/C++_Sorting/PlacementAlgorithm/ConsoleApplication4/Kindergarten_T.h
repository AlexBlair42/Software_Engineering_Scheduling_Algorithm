#pragma once
#include "Teacher.h"

class Kindergarten_T : public virtual Teacher
{
public:
	void print_teacher_type();
	Kindergarten_T(Teacher*T);
};
