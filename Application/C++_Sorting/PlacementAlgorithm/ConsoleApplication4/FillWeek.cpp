#include "FillWeek.h"

void Subject::populatedArrays(int subjectWeek[65], int teacherArray[18])
{
	//fill subjectweek array with 0s
	for (int i = 0; i < 65; i++) {
		subjectWeek[i] = 0;
		//fill the teacher array with the numerical values of teachers
		if (i < 18) {
			teacherArray[i] = i;
		}
	}
}

void Subject::placeTeachers(int (&week)[65], int (&teacher)[18])
{
	for (int t = 0; t < 18; t++) {
		
		for (int s = 0; s < 65; s++) {
			if (s < 13 && !totaledHour(week, teacher, 1)) {
				week[s] = teacher[t];
			}
			else if ((s >= 13 || s < 26) && !totaledHour(week, teacher, 2)) {
				week[s] = teacher[t];
			}
			else if ((s >= 26 || s < 39) && !totaledHour(week, teacher, 3)) {
				week[s] = teacher[t];
			}
			else if ((s >= 39 || s < 52) && !totaledHour(week, teacher, 4)) {
				week[s] = teacher[t];
			}
			else if ( s >= 52 && !totaledHour(week, teacher, 5)) {
				week[s] = teacher[t];
			}
		}
	}
}
