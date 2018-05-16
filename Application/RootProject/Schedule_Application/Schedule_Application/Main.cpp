#include "TeacherFactory.h"
#include "Teacher.h"
#include "Kindergarten_T.h"
#include "FirstGrade_T.h"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int max_k = 2;
int max_1 = 2;
int max_2 = 2;

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

	std::cin.get();
}