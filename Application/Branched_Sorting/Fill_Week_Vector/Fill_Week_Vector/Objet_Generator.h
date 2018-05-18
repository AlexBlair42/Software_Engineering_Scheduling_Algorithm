#pragma once
#include <memory>
#include <string>

#include "Object.h"
#include "Class1.h"
#include "class2.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"

using std::shared_ptr;

class TestFactory {
private:
	

public:
	static shared_ptr<TestClass> createInstance(int name)
	{

		TestClass * instance = nullptr;

		if (name == 1)
			instance = new Class1();
		if (name == 2)
			instance = new Class2();
		if (name == 3)
			instance = new Class3();
		if (name == 4)
			instance = new Class4();
		if (name == 5)
			instance = new Class5();
		if (instance != nullptr)
			return shared_ptr<TestClass>(instance);
		else
			return nullptr;
	}


};

