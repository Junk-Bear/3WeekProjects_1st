#include "SimpleVector.h"

#include <iostream>

using namespace std;

int main()
{
	SimpleVector<int>* Tester = new SimpleVector<int>;
	cout << "Tester의 최대 사이즈 : " << Tester->capacity() << endl;

	Tester->push_back(1);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->push_back(2);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->push_back(3);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->push_back(4);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->pop_back();

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->push_back(4);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->pop_back();

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	delete Tester;

	return 0;
}
