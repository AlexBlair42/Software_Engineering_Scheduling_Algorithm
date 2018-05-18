#pragma once
#include "Object.h"


class Class4 : public TestClass {
public:
	Class4() {};
	virtual ~Class4() {};
	virtual void whereAmI() {
		cout << "Here I am, Class4" << endl;
	}
};