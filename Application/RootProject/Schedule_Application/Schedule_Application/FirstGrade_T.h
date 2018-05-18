#pragma once
#include "Teacher.h"
#include <string>

class FirstGrade_T : public Teacher
{
public:
	void print_teacher_info();


	const int lunchmin = 40;

	bool litfitreq = 0;

	bool physstatus = 0;
	bool lunchstatus = 0;
	bool libstatus = 0;
	bool musicstatus = 0;
	bool socstatus = 0;
};
