#include "TeacherFactory.h"
#include "Kindergarten_T.h"
#include "FirstGrade_T.h"

#include <iostream>
#include <string>
#include "SecondGrade_T.h"


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
}
