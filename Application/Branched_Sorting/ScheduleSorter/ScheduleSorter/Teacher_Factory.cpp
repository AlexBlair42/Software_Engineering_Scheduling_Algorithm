#include "Teacher.h"
#include "Kindergarten_T.h"
#include "First_Grade_T.h"
#include "Second_Grade_T.h"
#include "Third_Grade_T.h"
#include "Fourth_Grade_T.h"
#include "Fifth_Grade_T.h"
#include "Sixth_Grade_T.h"

#include <iostream>
#include <string>
#include <vector>

std::vector<Teacher> Teachers;

int max_k = 2;
int max_one = 2;
int max_two = 2;
int max_three = 3;
int max_four = 2;
int max_five = 2;
int max_six = 2;

enum Teacher_Type
{
	Kindergarten, First_Grade, Second_Grade, Third_Grade, Fourth_Grade, Fifth_Grade, Sixth_Grade
};


Teacher* create_teacher()
{
	for (int i = 0; i < max_k; i++)
	{
		Kindergarten_T *kinder = new Kindergarten_T();
	}

	for (int j = 0; j < max_one; j++)
	{
		First_Grade_T *first = new First_Grade_T();
	}
	for (int k = 0; k < max_two; k++)
	{
		Second_Grade_T *second = new Second_Grade_T();
	}
	for (int h = 0; h < max_three; h++)
	{

	}
	for (int g = 0; g < max_four; g++)
	{

	}
	for (int f = 0; f < max_five; f++)
	{

	}
	for (int a = 0; a < max_six; a++)
	{

	}
}


void Load_Teacher_Vector()
{
	
}