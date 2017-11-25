#pragma once
//All of the code is in the header, since it's a template class.

const unsigned int MAX_SIZE = 1000;
template <typename T>
class Stack
{
private:
	T data[MAX_SIZE];
	unsigned int size;

public:
	Stack();

public:
	void push(const T&);
	void pop();
	bool isEmpty()const;

public:
	T top()const;
	bool isFull()const;
	unsigned int getSize()const;
	unsigned int getMaxSize()const;
};

template <typename T>
Stack<T>::Stack()
{
	size = 0;
}

template <typename T>
void Stack<T>::push(const T& element)
{
	if (!isFull())
	{
		data[size++] = element;
	}
}

template <typename T>
void Stack<T>::pop()
{
	if (!isEmpty())
	{
		size--;
	}
}

template <typename T>
bool Stack<T>::isEmpty()const
{
	return size == 0;
}

template <typename T>
T Stack<T>::top()const
{
	if (!isEmpty())
	{
		return data[size - 1];
	}
		return T();
}

template <typename T>
bool Stack<T>::isFull()const
{
	return size == MAX_SIZE;
}

template <typename T>
unsigned int Stack<T>::getSize()const
{
	return size;
}

template <typename T>
unsigned int Stack<T>::getMaxSize()const
{
	return MAX_SIZE;
}

