#include "Teacher.h"
#include "Kindergarten_T.h"

#include <iostream>
#include <string>


class Client
{
public:
	Client()
	{
		Teacher_Types = Kindergarten;
		pTeacher = Teacher::create_teacher(type);
	}
	~Client();
	Teacher* getTeacher();

private:
	Teacher pTeacher;
};