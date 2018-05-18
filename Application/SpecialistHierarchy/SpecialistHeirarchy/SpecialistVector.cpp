#include "Teacher.h"
#include "Art_T.h"
#include "Library_T.h"
#include "Music_T.h"
#include "Phys_Ed_T.h"
#include "Soc_Studies_T.h"

#include <iostream>
#include <string>
#include <vector>

std::vector<Teacher> Specialists;

Teacher* create_specialists()
{
	Art_T *art = new Art_T();
	Specialists.push_back(*art);

	Library_T *lib = new Library_T();
	Specialists.push_back(*lib);

	Music_T *mus = new Music_T();
	Specialists.push_back(*mus);

	Phys_Ed_T *phys = new Phys_Ed_T();
	Specialists.push_back(*phys);

	Soc_Studies_T *sstdy = new Soc_Studies_T();
	Specialists.push_back(*sstdy);

}