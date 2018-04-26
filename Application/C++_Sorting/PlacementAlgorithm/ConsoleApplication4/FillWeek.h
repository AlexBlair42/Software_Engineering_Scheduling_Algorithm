#pragma once

#include <iostream>
#include <array>

class Subject {
protected:
	int subjectWeek[65] = { 0 };
	int teacherArray[18] = { 0 };
	int day = 1;
	

public:
	void populatedArrays(int subjectWeek[65], int teacherArray[18]);
	
	void placeTeachers(int (&week)[65], int (&teacher)[18]);

	bool totaledHour(int (&subjectWeek)[65], int (&teacherArray)[18], int day);

	void beginPlacement();
};