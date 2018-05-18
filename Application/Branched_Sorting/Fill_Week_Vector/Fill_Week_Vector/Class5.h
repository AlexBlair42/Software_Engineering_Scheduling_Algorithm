#pragma once
#include "Object.h"


class Class5 : public TestClass {
public:
	Class5() {};
	virtual ~Class5() {};
	virtual void whereAmI() {
		cout << "Here I am, Class5" << endl;
	}
};