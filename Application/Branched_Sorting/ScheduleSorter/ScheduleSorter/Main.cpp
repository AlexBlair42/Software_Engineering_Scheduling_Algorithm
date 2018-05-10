#include <iostream>
#include "Teacher.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	Teacher *Teacher_T;
	Teacher_T = new Teacher();
	Teacher_T->create_teacher();

	std::cin.get();
}