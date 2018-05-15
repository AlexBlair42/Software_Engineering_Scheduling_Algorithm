#include "Teacher.h"
#include "Kindergarten_T.h"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	Teacher *teacher = new Teacher();
	teacher->create_teacher();


	std::cin.get();
}