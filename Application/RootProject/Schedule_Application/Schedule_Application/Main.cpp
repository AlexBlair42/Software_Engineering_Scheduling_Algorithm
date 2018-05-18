#include "TeacherFactory.h"
#include "Teacher.h"
#include "Kindergarten_T.h"
#include "FirstGrade_T.h"
#include "SixthGrade_T.h"

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "SecondGrade_T.h"
#include "ThirdGrade_T.h"
#include "FourthGrade_T.h"
#include "FifthGrade_T.h"

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
int maxClasses = (max_k + max_1 + max_2 + max_3 + max_4 + max_5 + max_6);

std::vector<Teacher> Teachers;

int main()
{

	// Generate Teacher objects while there are classes for to represent these objects
	// also, place these objects in a vector for storage.

	TeacherFactory *Factory = new TeacherFactory();

	do
	{
		for (int i = 0; i < max_k; i++)
		{
			Factory->Create(Kindergarten);
			Teachers.push_back(Kindergarten_T());
		}

		for (int j = 0; j < max_1; j++)
		{
			Factory->Create(FirstGrade);
			Teachers.push_back(FirstGrade_T());
		}

		for (int f = 0; f < max_2; f++)
		{
			Factory->Create(SecondGrade);
			Teachers.push_back(SecondGrade_T());
		}

		for (int a = 0; a < max_3; a++)
		{
			Factory->Create(ThirdGrade);
			Teachers.push_back(ThirdGrade_T());
		}

		for (int t = 0; t < max_4; t++)
		{
			Factory->Create(FourthGrade);
			Teachers.push_back(FourthGrade_T());
		}
		for (int g = 0; g < max_5; g++)
		{
			Factory->Create(FifthGrade);
			Teachers.push_back(FifthGrade_T());
		}
		for (int r = 0; r < max_6; r++)
		{
			Factory->Create(SixthGrade);
			Teachers.push_back(SixthGrade_T());
		}
	} while (!maxClasses);

	/*
	for (int *i = 0; *i < Teachers.end(); i++)
	{
		
	}
*/
	std::cin.get();
}