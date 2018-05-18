/*#include "Objet_Generator.h"

#include "Class1.h"
#include "class2.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"

shared_ptr<TestClass> TestFactory::createInstance(std::string name)
{
	TestClass * instance = nullptr;

	if (name == "one")
		instance = new Class1();
	if (name == "two")
		instance = new Class2();
	if (name == "three")
		instance = new Class3();
	if (name == "four")
		instance = new Class4();
	if (name == "five")
		instance = new Class5();
	if (instance != nullptr)
		return shared_ptr<TestClass>(instance);
	else
		return nullptr;
}
*/