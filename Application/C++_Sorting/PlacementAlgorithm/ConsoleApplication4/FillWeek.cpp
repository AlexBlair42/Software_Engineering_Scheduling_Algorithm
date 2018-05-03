#include "FillWeek.h"
#include <iostream>
using std::endl;
using std::cout;
using std::cin;


/*
School day is a total of 6.5 hours
*/


////////////////////////////////////////////////////////////////////////////////////
// Variables that will be needed eventually
////////////////////////////////////////////////////////////////////////////////////

// total of 6.5 hours
double SchoolDayTime = 6.5;

double SchoolStart = 8.5;
double SchoolEnd = 15.00;


///////////////////////////////////////////////////////////////////////////////////

void FillWeek::fillWeek(int weekSlots, int subjects, int teachers, int hour)
{
	int i = 0;
	int j = 0;
	int** vertWeek = generateWeek(weekSlots, subjects);
	int** teachers = generateTeachers(teachers, hour);
	for (i = 0; i < subjects; i++) {
		for (j = 0; j < weekSlots; j++) {

		}
	}
}

int ** FillWeek::generateWeek(int weekSlots, int subjects)
{
	int** week;
	
	week = new int*[weekSlots];
	for (int i = 0; i < weekSlots; i++) {
		week[i] = new int[subjects];
		for (int j = 0; j < subjects; j++) {
			week[i][j] = 0;

			std::cout << week[i] << std::endl;
		}
	}
	return week;
}

int ** FillWeek::generateTeachers(int teachers, int hour)
{
	int** teacher;
	teacher = new int*[teachers];
	for (int i = 0; i < teachers; i++) {
		teacher[i] = new int[hour];
		for (int j = 0; j < hour; j++) {
			teacher[i][j] = 0;
			std::cout << teacher[i] << std::endl;
		}
	}
	return teacher;
}


