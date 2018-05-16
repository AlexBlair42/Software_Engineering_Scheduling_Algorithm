#include "TeacherFactory.h"
#include "Teacher.h"
#include "Kindergarten_T.h"
#include "FirstGrade_T.h"

#include <iostream>
#include <string>
#include "SixthGrade_T.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int max_k = 2;
int max_1 = 2;
int max_2 = 2;
int max_3 = 3;
int max_4 = 2;
int max_5 = 2;
int max_6 = 2;

int main()
{

	TeacherFactory *Factory = new TeacherFactory();

	for (int i = 0; i < max_k; i++)
	{
		Factory->Create(Kindergarten);
	}

	for (int j = 0; j < max_1; j++)
	{
		Factory->Create(FirstGrade);
	}

	for (int f = 0; f < max_2; f++)
	{
		Factory->Create(SecondGrade);
	}

	for (int a = 0; a < max_3; a++)
	{
		Factory->Create(ThirdGrade);
	}

	for (int t = 0; t < max_4; t++)
	{
		Factory->Create(FourthGrade);
	}
	for (int g = 0; g < max_5; g++)
	{
		Factory->Create(FifthGrade);
	}
	for (int r = 0; r < max_6; r++)
	{
		Factory->Create(SixthGrade);
	}

	SixthGrade_T s;
	s.print_teacher_info();

	std::cin.get();
}