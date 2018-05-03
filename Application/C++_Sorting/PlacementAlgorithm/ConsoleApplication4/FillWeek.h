#pragma once

#include <iostream>
#include <array>

class FillWeek {
private:
	int week[69][6] = { {0}, {0} };
	int teacher[18][2] = { {0}, {0} };
	int day = 1;
	int weekSlots;

public:
	void fillWeek();

	int **generateWeek(int weekSlots, int subjects);

	int generateTeachers(int teacher[18][2]);
};