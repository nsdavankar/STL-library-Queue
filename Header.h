/**************************************************************************
* AUTHOR        : Nisha Davankar
* Student ID    : 1045735
* Assignment    : 9
* CLASS         : CS1C
* SECTION       : MW 5pm
* DUE DATE      : 03/11/19
**************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <queue>
using namespace std;

const int MAX_SIZE = 10;		//const int val

template <class Type>

class queueType					//Template class
{
public:
	queueType(int stackSize = 100);
	~queueType();
	queueType(const queueType<Type>& otherQueue);
	void enqueue(Type value);
	void dequeue();
	void front();
	int size();
	void isEmpty();
	bool isFull();
	void print(queueType<Type>& printQueue);

private:
	queue <Type> newQueue;
};


/**************************************************************************
* queueType<Type>::queueType(int QueueSize)
* -------------------------------------------------------------------------
* This is the default Software constructor
* -------------------------------------------------------------------------
*
**************************************************************************/
template<class Type>
queueType<Type>::queueType(int QueueSize)
{
}

/**************************************************************************
* queueType<Type>::~queueType()
* -------------------------------------------------------------------------
* This is the destructor constructor
* -------------------------------------------------------------------------
*
**************************************************************************/
template<class Type>
queueType<Type>::~queueType()
{}

/**************************************************************************
* queueType<Type>::~queueType()
* -------------------------------------------------------------------------
* This is the copy constructor constructor
* -------------------------------------------------------------------------
* IN- const queueType<Type>& otherQueue
**************************************************************************/
template<class Type>
queueType<Type>::queueType(const queueType<Type>& otherQueue)
{
	cout << "\nCopy constructor is called - ";
	newQueue= otherQueue.newQueue;
	if (newQueue.size() <= 0)
	{
		cout << "Queue is empty so nothing is copied\n";
	}
	else
	{
		cout << "Copied items are -";
	}

}

/**************************************************************************
* void queueType<Type>::enqueue(Type value)
* -------------------------------------------------------------------------
* This function adds elements to the back of the queue
* -------------------------------------------------------------------------
* IN- Type value
**************************************************************************/
template<class Type>
void queueType<Type>::enqueue(Type value)
{
	if (newQueue.size() >= MAX_SIZE)
	{
		isFull();
	}

	else
	{
	newQueue.push(value);
	}
	/*list[down]= newItem;
	down++;*/
}

/**************************************************************************
* void queueType<Type>::dequeue()
* -------------------------------------------------------------------------
* This function deletes elements at the front of the queue
* -------------------------------------------------------------------------
*
**************************************************************************/
template<class Type>
void queueType<Type>::dequeue()
{
	if (newQueue.size() <= 0)
	{
		isEmpty();
	}
	else
	{
	newQueue.pop();
	}
}

/**************************************************************************
* void queueType<Type>::front()
* -------------------------------------------------------------------------
* This function returns the value at the front of the queue
* -------------------------------------------------------------------------
*
**************************************************************************/
template<class Type>
void queueType<Type>::front()
{
	if (newQueue.size() <= 0)
	{
		cout << "Queue is empty so nothing is in the front\n";
	}
	else
	{
	cout << newQueue.front();
	}
}

/**************************************************************************
* int queueType<Type>::size()
* -------------------------------------------------------------------------
* This function returns the size of the queue
* -------------------------------------------------------------------------
*
**************************************************************************/
template<class Type>
int queueType<Type>::size()
{
	return (newQueue.size());
}

/**************************************************************************
* void queueType<Type>::isEmpty()
* -------------------------------------------------------------------------
* This function checks if the queue is empty
* -------------------------------------------------------------------------
*
**************************************************************************/
template<class Type>
void queueType<Type>::isEmpty()
{
	if (!newQueue.empty() || newQueue.size() < 0)
	{
		cout << "Queue is not empty";
	}

	else
	{
		cout << "Queue is empty";
	}
}

/**************************************************************************
* bool queueType<Type>::isFull()
* -------------------------------------------------------------------------
* This function checks if the queue is full
* -------------------------------------------------------------------------
*
**************************************************************************/
template<class Type>
bool queueType<Type>::isFull()
{
	if (newQueue.size() >= MAX_SIZE)
	{
		cout << "Queue is full";
	}
	else
	{
		cout << "Queue is not full";
	}
}

/**************************************************************************
* void queueType<Type>::print(queueType<Type>& printQueue)
* -------------------------------------------------------------------------
* This function prints the elements in the queue
* -------------------------------------------------------------------------
* IN & OUT- queueType<Type>& printQueue
**************************************************************************/
template<class Type>
void queueType<Type>::print(queueType<Type>& printQueue)
{
	queue <Type> tempQueue;
	tempQueue= printQueue.newQueue;

	while (!tempQueue.empty())
	{
		cout << tempQueue.front() << "  ";
		tempQueue.pop();
	}
}
#endif /* HEADER_H_ */

