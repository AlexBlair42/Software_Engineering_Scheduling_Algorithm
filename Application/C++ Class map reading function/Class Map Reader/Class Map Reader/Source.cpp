#include <iostream>
#include <vector>
#include <map>

using namespace std;

int k;
int one;
int two;
int three;
int four;
int five;
int six;

std::vector<int> classes(7);
//std::vector<int>::iterator iter = classes.begin();

void vectorfill()
{
	classes.clear();
	classes.push_back(k);
	classes.push_back(one);
	classes.push_back(two);
	classes.push_back(three);
	classes.push_back(four);
	classes.push_back(five);
	classes.push_back(six);
}

int cycle()
{
	int* queue;

	for (int i : classes)
	{
		classes.get();
	}
}

int main() {

	k = 1;
	one = 2;
	two = 3;
	three = 4;
	four = 5;
	five = 6;
	six = 7;

	vectorfill();

	for (int i : classes)
	{
		std::cout << "i = " << i << endl;
	}
	return 0;
};