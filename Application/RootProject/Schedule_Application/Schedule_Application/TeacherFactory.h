#pragma once
#include "Teacher.h"

enum TeacherType{Kindergarten, FirstGrade, SecondGrade, ThirdGrade, FourthGrade, FifthGrade, SixthGrade, SocialStudies, Music, PE, Art, Library};

class TeacherFactory
{
public:
	Teacher * Create(TeacherType type);
};
