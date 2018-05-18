#pragma once
#include "Object.h"


class Class2 : public TestClass {
public:
	Class2() {};
	virtual ~Class2() {};
	virtual void whereAmI() {
		cout << "Here I am, Class2" << endl;
	}
};