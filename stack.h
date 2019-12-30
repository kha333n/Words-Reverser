#pragma once
#include "node.h"

template <class T>
class stack
{
private:
	node<T> * head = nullptr;
public:
	T pop();
	void push(T);
	T top();
	bool isEmpty();
};
