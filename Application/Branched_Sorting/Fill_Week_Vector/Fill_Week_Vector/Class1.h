#pragma once
#include "Object.h"


class Class1 : public TestClass {
public:
	Class1() {};
	virtual ~Class1() {};
	virtual void whereAmI() {
		cout << "Here I am, Class1" << endl;
	}
};