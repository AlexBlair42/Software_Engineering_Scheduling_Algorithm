#pragma once

#include <iostream>
#include <array>

class Subject {
protected:
	int subjectWeek[65] = { 0 };
	int teacherArray[18][2] = { {0}, {0} };
	int day = 1;
	

public:
	void populatedArrays(int subjectWeek[65], int teacherArray[18][2]);
	
	void placeTeachers(int (&week)[65], int (&teacher)[18][2], int teacherArray[18][2]);

	bool totaledHour(int (&subjectWeek)[65], int teacher, int day, int teacherArray[18][2]);

	void beginPlacement();
};