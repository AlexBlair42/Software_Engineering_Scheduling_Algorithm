#include "Teacher.h"
#include "Art_T.h"
#include "Library_T.h"
#include "Music_T.h"
#include "Phys_Ed_T.h"
#include "Soc_Studies_T.h"
#include "SpecialistVector.h"

#include <iostream>
#include <string>
#include <vector>
#include <iterator>


// Functions are integrated, but I am having trouble printing the contents of the vector.


std::vector<Teacher*> Specialists;
/*
Teacher* create_specialists()
{
	Art_T *art = new Art_T();
	Specialists->push_back(*art);

	Library_T *lib = new Library_T();
	Specialists.push_back(*lib);

	Music_T *mus = new Music_T();
	Specialists.push_back(*mus);

	PE_T *phys = new PE_T();
	Specialists.push_back(*phys);

	Soc_Studies_T *sstdy = new Soc_Studies_T();
	Specialists.push_back(*sstdy);

}

void PrintVec()
{
	for (auto i = Specialists.begin(); i != Specialists.end(); ++i)
	{
		std::cout << Specialists[*i] << ' ';
	}
}

*/