#pragma once
#include "Teacher.h"
#include <string>

class Kindergarten_T : public Teacher
{
public:
	void print_teacher_info();


	const int lunchmin = 45;

	bool litfitreq = true;

	bool physstatus = 0;
	bool lunchstatus = 0;
	bool libstatus = 0;
	bool musicstatus = 0;
	bool socstatus = 0;


};
