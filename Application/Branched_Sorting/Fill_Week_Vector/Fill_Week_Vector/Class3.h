#pragma once
#include "Object.h"
#include "Class1.h"
#include "class2.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"


class Class3 : public TestClass {
public:
	Class3() {};
	virtual ~Class3() {};
	virtual void whereAmI() {
		cout << "Here I am, Class3" << endl;
	}
};