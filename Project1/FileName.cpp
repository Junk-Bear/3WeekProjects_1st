#include "SimpleVector.h"

#include <iostream>

using namespace std;

int main()
{
	SimpleVector<int>* Tester = new SimpleVector<int>(3);
	cout << "Tester의 최대 사이즈 : " << Tester->capacity() << endl;

	//push, pop 테스트
	Tester->push_back(1);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->pop_back();

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;




	//객체복붙 테스트
	Tester->push_back(1);
	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	SimpleVector<int>* CopyTest = new SimpleVector<int>(*Tester);
	cout << "CopyTest의 현재 사이즈 : " << Tester->size() << endl;

	delete CopyTest;
	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;




	//resize 테스트
	Tester->push_back(2);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->push_back(3);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;

	Tester->push_back(4);

	cout << "Tester의 현재 사이즈 : " << Tester->size() << endl;
	cout << "Tester의 최대 사이즈 : " << Tester->capacity() << endl;

	delete Tester;
}
