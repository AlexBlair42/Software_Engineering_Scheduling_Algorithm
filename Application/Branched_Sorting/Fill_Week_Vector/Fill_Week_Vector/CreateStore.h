#pragma once
#include "Objet_Generator.h"
#include <vector>
#include <iterator>

using std::vector;

class CreateStore {

	typedef shared_ptr<TestClass> type_objects;

private:

	vector<type_objects> objects;

public:

	vector<type_objects> placeInVector() {
		//vector<type_objects*>::iterator it = objects.begin();
		for (int i = 1; i <= 5; i++) {
			type_objects instance = TestFactory::createInstance(i);
			objects.push_back(instance);
			//cout << "here" << endl;
		}
		cout << objects.size() << endl;
		//debugging
		/*while(*it != *objects.end()) {
			cout << *it << endl;
			it++;
			//cout << "Here" << endl;
		}*/
		return objects;
		//objects.clear();
	}

	void outputObjects() {

		vector<type_objects> temp = placeInVector();
		//vector<type_objects>::iterator it = temp.begin();
		for (int i = 0; i < temp.size(); i++) {
			temp[i]->whereAmI();
		}
		temp.clear();
	}
};