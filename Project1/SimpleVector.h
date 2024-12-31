#pragma once
#include <iostream>
#include <algorithm>

#define DEFAULT_CAPACITY 10
template <typename T>
class SimpleVector
{
private:
	T* arr;
	int currentSize; //실제 배열에 참
	int currentCapacity;// 넣을수 있는 배열 최대치

public:
	SimpleVector(int _value = DEFAULT_CAPACITY) : currentSize(0)
	{
		arr = new T[_value];
		currentCapacity = _value;
	}

	//생성자 : 다른 객체 복붙(ver.deep)
	SimpleVector(const SimpleVector& _obj)
	{
		this->arr = new T[_obj.currentCapacity];
		this->currentSize = _obj.currentSize;
		this->currentCapacity = _obj.currentCapacity;
		for (int i = 0; i < _obj.currentSize; i++)
		{
			this->arr[i] = _obj.arr[i];
		}
	}

	//소멸자
	~SimpleVector()
	{
		delete[] arr;
	}

	void push_back(const T _value);//배열 끝에 값넣기, 가득차면 사이즈 넣기
	void pop_back();//배열 끝부분 삭제
	int size();// 현재 배열이 얼마나 차있는지
	int capacity();//배열 최대치값
	void sordData();// 배열 정렬, sort함수 사용
	void resize(int );//배열의 크기를 늘리고, 복붙(deep) 후 기존 것은 delete
};

template<typename T>
inline void SimpleVector<T>::push_back(const T _inValue)
{
	if (currentSize >= currentCapacity) // 가득참
	{
		resize(currentCapacity + 5);
	}
	
	arr[currentSize] = _inValue;
	currentSize++;
}

template<typename T>
inline void SimpleVector<T>::pop_back()
{
	if (currentSize > 0)
	{
		currentSize--;
	}
}

template<typename T>
inline int SimpleVector<T>::size()
{
	return currentSize;
}

template<typename T>
inline int SimpleVector<T>::capacity()
{
	return currentCapacity;
}

template<typename T>
inline void SimpleVector<T>::sordData()
{
	sort(arr, arr + currentSize);
}

template<typename T>
inline void SimpleVector<T>::resize(int _addCap)
{
	if (_addCap <= currentCapacity)
	{
		return;
	}

	T* tmpPtr = new T[_addCap];

	for (int i = 0; i < currentCapacity; i++)
	{
		tmpPtr[i] = arr[i];
	}
	delete[] arr;

	arr = tmpPtr;
	currentCapacity = _addCap;
}


