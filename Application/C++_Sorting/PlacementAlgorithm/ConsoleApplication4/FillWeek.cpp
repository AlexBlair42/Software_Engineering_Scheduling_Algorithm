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

void FillWeek::fillWeek()
{

}

int ** FillWeek::generateWeek(int weekSlots, int subjects)
{
	int** week;
	week = new int*[weekSlots];
	for (int i = 0; i < 69; i++) {
		week[i] = new int[subjects];
		for (int j = 0; j < 6; i++) {
			week[i][j] = 0;
			std::cout << week[i] << std::endl;
		}
	}
	return week;
}

int FillWeek::generateTeachers(int teacher[18][2])
{
	for (int i = 0; i < 18; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 0)
				teacher[i][j] = i;
			else
				teacher[i][j] = 2;
		}
	}
}
