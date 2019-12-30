#include "stack.h"
#include "node.h"

template <class T>
T stack<T>::pop()
{
	T x = head->get();
	node<T> *p = head;
	head = head->getNext();
	delete p;
	return x;
}

template <class T>
void stack<T>::push(T x)
{
	node<T> *newNode = new node<T>();
	newNode ->set(x);
	newNode->setNext(head);
	head = newNode;
}

template<class T>
T stack<T>::top()
{
	return head->get();
}

template<class T>
bool stack<T>::isEmpty()
{
	return (head == nullptr);
}