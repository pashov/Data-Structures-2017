#pragma once
//All of the code is in the header, since it's a template class.
const int MAX_SIZE = 500;

template <typename T>
class StaticQueue
{
private:
	T data[MAX_SIZE];
	T last;
	unsigned int size;

public:
	StaticQueue();

public:
	void push(const T&);
	void pop();
	T first()const;
	bool isEmpty()const;

public:
	bool isFull()const;
	unsigned int getSize()const;
};

template <typename T>
StaticQueue<T>::StaticQueue()
{
	size = 0;
}

template <typename T>
void StaticQueue<T>::push(const T& element)
{
	if (!isFull())
	{

		if (isEmpty())
		{
			last = element;
		}
		data[size++] = element;
	}
}

template <typename T>
void StaticQueue<T>::pop()
{
	if (!isEmpty())
	{
		if (size == 1)
		{
			last = T();
		}
		size--;
	}
}

template <typename T>
T StaticQueue<T>::first()const
{
	if (!isEmpty())
	{
		return data[size - 1];
	}
		return T();
}

template <typename T>
bool StaticQueue<T>::isEmpty()const
{
	return size == 0;
}

template <typename T>
bool StaticQueue<T>::isFull()const
{
	return size == MAX_SIZE;
}

template <typename T>
unsigned int StaticQueue<T>::getSize()const
{
	return size;
}