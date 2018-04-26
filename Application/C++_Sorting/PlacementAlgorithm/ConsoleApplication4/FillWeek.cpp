#include "FillWeek.h"

void Subject::populatedArrays(int subjectWeek[65], int teacherArray[18][2])
{
	//fill subjectweek array with 0s
	for (int i = 0; i < 65; i++) {
		subjectWeek[i] = 0;
		//fill the teacher array with the numerical values of teachers
		if (i < 18) {
			teacherArray[i][i] = i;
		}
	}
}

void Subject::placeTeachers(int (&week)[65], int (&teacher)[18][2], teacherArray[18][2])
{
	for (int t = 0; t < 18; t++) {
		
		for (int s = 0; s < 65; s++) {
			if (s < 13 && !totaledHour(week, teacher[t][2], 1, )) {
				week[s] = teacher[t][1];
			}
			else if ((s >= 13 || s < 26) && !totaledHour(week, teacher[t][1], 2)) {
				week[s] = teacher[t][1];
			}
			else if ((s >= 26 || s < 39) && !totaledHour(week, teacher[t][1], 3)) {
				week[s] = teacher[t][1];
			}
			else if ((s >= 39 || s < 52) && !totaledHour(week, teacher[t][1], 4)) {
				week[s] = teacher[t][1];
			}
			else if ( s >= 52 && !totaledHour(week, teacher[t][1], 5)) {
				week[s] = teacher[t][1];
			}

		}
	}
}

bool Subject::totaledHour(int(&subjectWeek)[65], int teacher, int day, int teacherArray[18][2])
{
	switch (day) {
	case 1:
		for (int i = 0; i < 13; i++) {
			if (subjectWeek[i] == teacher)
				
		}
	case 2:
		for (int i = 13; i < 26; i++) {

		}
	case 3:
		for (int i = 26; i < 39; i++) {

		}
	case 4:
		for (int i = 39; i < 52; i++) {

		}
	case 5:
		for (int i = 52; i < 65; i++) {

		}
	}
	return false;
}
