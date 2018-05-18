#pragma once
#include <vector>
#include "TeacherFactory.h"
#include "Kindergarten_T.h"
#include "FirstGrade_T.h"
#include "SecondGrade_T.h"
#include "ThirdGrade_T.h"
#include "FourthGrade_T.h"
#include "FifthGrade_T.h"
#include "SixthGrade_T.h"
#include <iostream>
#include <algorithm>
#include <xmmintrin.h>
using std::vector;

class VectorWeek
{
private:
	int max_k = 2;
	int max_1 = 2;
	int max_2 = 2;
	int max_3 = 3;
	int max_4 = 2;
	int max_5 = 2;
	int max_6 = 2;
	int maxClasses = (max_k + max_1 + max_2 + max_3 + max_4 + max_5 + max_6);
	std::vector<Teacher> Teachers;

public:

	vector<Teacher> fillTeachers()
	{
		TeacherFactory *Factory = new TeacherFactory();
		do
		{
			for (int i = 0; i < max_k; i++)
			{
				Factory->Create(Kindergarten);
				Teachers.push_back(Kindergarten_T());
				Teachers[i].set_grade(0);
			}

			for (int j = 0; j < max_1; j++)
			{
				Factory->Create(FirstGrade);
				Teachers.push_back(FirstGrade_T());
				Teachers[j+max_k].set_grade(1);
			}

			for (int f = 0; f < max_2; f++)
			{
				Factory->Create(SecondGrade);
				Teachers.push_back(SecondGrade_T());
				Teachers[f+max_1+max_k].set_grade(2);
			}

			for (int a = 0; a < max_3; a++)
			{
				Factory->Create(ThirdGrade);
				Teachers.push_back(ThirdGrade_T());
				Teachers[a+max_2+max_1+max_k].set_grade(3);
			}

			for (int t = 0; t < max_4; t++)
			{
				Factory->Create(FourthGrade);
				Teachers.push_back(FourthGrade_T());
				Teachers[t+max_3+max_2+max_1+max_k].set_grade(4);
			}
			for (int g = 0; g < max_5; g++)
			{
				Factory->Create(FifthGrade);
				Teachers.push_back(FifthGrade_T());
				Teachers[g+max_4+max_3+max_2+max_1+max_k].set_grade(5);
			}
			for (int r = 0; r < max_6; r++)
			{
				Factory->Create(SixthGrade);
				Teachers.push_back(SixthGrade_T());
				Teachers[r+max_5+max_4+max_3+max_2+max_1+max_k].set_grade(6);
			}
		} while (!maxClasses);
		return Teachers;
	}

	vector<Teacher> giveNames()
	{
		vector<Teacher> temp = fillTeachers();
		int k = 1;
		int one = 1;
		int two = 1;
		int three = 1;
		int four = 1;
		int five = 1;
		int six = 1;
		for (int i = 0; i < temp.size(); i++)
		{

			if (temp[i].get_grade() == 0)
			{
				if (k != max_k) {
					temp[i].set_name("Cavanaugh-Walsh");
					k++;
				}
				else {
					temp[i].set_name("Howe");
					k++;
				}
			}
			else if (temp[i].get_grade() == 1)
			{
				
				if (one != max_1) {
					temp[i].set_name("Rush");
					one++;
				}
				else {
					temp[i].set_name("Van Fossen");
					one++;
				}
			}
			else if (temp[i].get_grade() == 2)
			{
				
				if (two != max_2) {
					temp[i].set_name("May");
					two++;
				}
				else {
					temp[i].set_name("Surby");
					two++;
				}
			}
			else if (temp[i].get_grade() == 3)
			{
				
				if (three == max_3) {
					temp[i].set_name("Tilton");
					three++;
				}
				else if (three == max_3-1) {
					temp[i].set_name("Jordan");
					three++;
				}
				else {
					temp[i].set_name("Oas");
					three++;
				}
			}
			else if (temp[i].get_grade() == 4)
			{
				
				if (four != max_4) {
					temp[i].set_name("Duley");
					four++;
				}
				else {
					temp[i].set_name("Nunley");
					four++;
				}
			}
			else if (temp[i].get_grade() == 5)
			{
				
				if (five != max_5) {
					temp[i].set_name("Caldwell");
					five++;
				}
				else {
					temp[i].set_name("Kinne");
					five++;
				}
			}
			else if (temp[i].get_grade() == 6)
			{
				
				if (six != max_6) {
					temp[i].set_name("Constantine");
					six++;
				}
				else {
					temp[i].set_name("Haberman");
					six++;
				}
			}
		}
		Teachers = temp;
		/*for (int i = 0; i < Teachers.size(); i++)
		{
			std::cout << Teachers[i].get_name() << std::endl;
		}*/
		return Teachers;
	}

	void setTimes()
	{
		vector<Teacher> filledInfo = giveNames();

		int time = 835;

		std::reverse(filledInfo.begin(), filledInfo.end());

		for (int i = 0; i < filledInfo.size(); i++)
		{
			filledInfo[i].set_time(time);
			if (time == 1045)
				time += 255;
			else
				time += 105;
			if (time > 1500)
				time = 835;
		}
		Teachers = filledInfo;

		/*for (int i = 0; i < Teachers.size(); i++) {
			std::cout << Teachers[i].get_time() << std::endl;
		}*/
	}

	vector<Teacher> returnTeachers()
	{
		return Teachers;
	}
};

