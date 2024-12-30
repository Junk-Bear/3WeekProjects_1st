#pragma once
#include <iostream>

#define DEFAULT_CAPACITY 10
template <typename T>
class SimpleVector
{
private:
	T* arr;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector(int _value = DEFAULT_CAPACITY) : currentSize(0)
	{
		arr = new T[_value];
		currentCapacity = _value;
	}

	~SimpleVector()
	{
		delete[] arr;
	}

	void push_back(const T _value);
	void pop_back();
	int size();
	int capacity();
};

template<typename T>
inline void SimpleVector<T>::push_back(const T _inValue)
{
	if (currentCapacity > currentSize)
	{
		arr[currentSize] = _inValue;
		currentSize++;
	}
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

