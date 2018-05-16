#include <iostream>
#include <string>

#include "TeacherFactory.h"
#include "Kindergarten_T.h"
#include "FirstGrade_T.h"
#include "SecondGrade_T.h"
#include "ThirdGrade_T.h"
#include "FourthGrade_T.h"
#include "FifthGrade_T.h"
#include "SixthGrade_T.h"

Teacher* TeacherFactory::Create(TeacherType type)
{
	if (type == Kindergarten)
	{
		std::cout << "Created a K object!" << std::endl;
		return new Kindergarten_T();
	}
	else if (type == FirstGrade)
	{
		std::cout << "Created a 1 Object!" << std::endl;
		return new FirstGrade_T();
	}

	else if (type == SecondGrade)
	{
		std::cout << "Created a 2 Object!" << std::endl;
		return new SecondGrade_T();
	}

	else if (type == ThirdGrade)
	{
		std::cout << "Created a 3 object!" << std::endl;
		return new ThirdGrade_T();
	}

	else if (type == FourthGrade)
	{
		std::cout << "Created a 4 Teacher!" << std::endl;
		return new FourthGrade_T();
	}

	else if (type == FifthGrade)
	{
		std::cout << "Created a 5 Teacher!" << std::endl;
		return new FifthGrade_T();
	}

	else if (type == SixthGrade)
	{
		SixthGrade_T k;
		k.print_teacher_info();
		//std::cout << "Created a 6 Teacher!" << std::endl;
		return new SixthGrade_T();
	}

	else
		std::cout << "No Teacher could be created... " << std::endl;
}
