/**************************************************************************
* AUTHOR        : Nisha Davankar
* Student ID    : 1045735
* Assignment    : 9
* CLASS         : CS1C
* SECTION       : MW 5pm
* DUE DATE      : 03/11/19
**************************************************************************/

#include "Header.h"

/**************************************************************************
* Templates
* -------------------------------------------------------------------------
* This program uses to STL library container Queue to create a queue. This
* program adds elements to a queue, deletes elements from a queue, returns
* the front element of a queue, checks if a queue is empty or full. The
* program can also print all the elements in the queue. This programs has
* a copy constructor and it can copy all the elements of the queue in another
* queue.
***************************************************************************/
int main()
{
	cout << "Character Queue\n";
	queueType<char>charQueue;					//IN- Object of queueType
	cout << "Enqueue  ";
	//PROCESSING- adding elements to the Queue
	charQueue.enqueue('a');
	charQueue.enqueue('b');
	charQueue.enqueue('c');
	charQueue.enqueue('d');
	charQueue.enqueue('e');
	charQueue.enqueue('f');
	charQueue.print(charQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.print(charQueue);

	cout << "\nEnqueue  ";
	//PROCESSING- adding elements to the Queue
	charQueue.enqueue('g');
	charQueue.enqueue('h');
	charQueue.enqueue('i');
	charQueue.enqueue('j');
	charQueue.print(charQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.dequeue();
	charQueue.print(charQueue);

	cout << "\nIs Empty?  ";
	//PROCESSING- checking if queue is empty
	charQueue.isEmpty();

	cout << "\nIs Full?  ";
	//PROCESSING- checking if queue is full
	charQueue.isFull();

	cout << "\nFront of the Queue?  ";
	//PROCESSING- checking what is in the front of the queue
	charQueue.front();

	queueType<char>copyCharQueue(charQueue);
	copyCharQueue.print(copyCharQueue);

	cout << "\n\nInteger Queue\n";
	queueType<int>intQueue;
	cout << "Enqueue  ";
	//PROCESSING- adding elements to the Queue
	intQueue.enqueue(1);
	intQueue.enqueue(2);
	intQueue.enqueue(3);
	intQueue.enqueue(4);
	intQueue.enqueue(5);
	intQueue.enqueue(6);
	intQueue.print(intQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	intQueue.dequeue();
	intQueue.dequeue();
	intQueue.print(intQueue);

	cout << "\nEnqueue  ";
	//PROCESSING- adding elements to the Queue
	intQueue.enqueue(7);
	intQueue.enqueue(8);
	intQueue.enqueue(9);
	intQueue.print(intQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	intQueue.dequeue();
	intQueue.dequeue();
	intQueue.dequeue();
	intQueue.dequeue();
	intQueue.print(intQueue);

	cout << "\nIs Empty?  ";
	//PROCESSING- checking if queue is empty
	intQueue.isEmpty();

	cout << "\nIs Full?  ";
	//PROCESSING- checking if queue is full
	intQueue.isFull();

	cout << "\nFront of the Queue?  ";
	//PROCESSING- checking what is in the front of the queue
	intQueue.front();

	queueType<int>copyIntQueue(intQueue);
	copyIntQueue.print(copyIntQueue);

	cout << "\n\nDouble Queue\n";
	queueType<double>doubleQueue;
	cout << "Enqueue  ";
	//PROCESSING- adding elements to the Queue
	doubleQueue.enqueue(1.1);
	doubleQueue.enqueue(2.2);
	doubleQueue.enqueue(3.3);
	doubleQueue.enqueue(4.4);
	doubleQueue.enqueue(5.5);
	doubleQueue.enqueue(6.6);
	doubleQueue.print(doubleQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	doubleQueue.dequeue();
	doubleQueue.print(doubleQueue);

	cout << "\nEnqueue  ";
	//PROCESSING- adding elements to the Queue
	doubleQueue.enqueue(7.7);
	doubleQueue.enqueue(8.8);
	doubleQueue.print(doubleQueue);

	cout << "\nDequeue  ";
	//PROCESSING- removing elements from the Queue
	doubleQueue.dequeue();
	doubleQueue.dequeue();
	doubleQueue.dequeue();
	doubleQueue.dequeue();
	doubleQueue.dequeue();
	doubleQueue.print(doubleQueue);

	cout << "\nIs Empty?  ";
	//PROCESSING- checking if queue is empty
	doubleQueue.isEmpty();

	cout << "\nIs Full?  ";
	//PROCESSING- checking if queue is full
	doubleQueue.isFull();

	cout << "\nFront of the Queue?  ";
	//PROCESSING- checking what is in the front of the queue
	doubleQueue.front();

	queueType<double>copyDoubleQueue(doubleQueue);
	copyDoubleQueue.print(copyDoubleQueue);

	cout << "\n\nTesting true condition for isFULL()\n";
	cout << "Enqueue  ";
	//PROCESSING- adding elements to the Queue
	doubleQueue.enqueue(7.7);
	doubleQueue.enqueue(8.8);
	doubleQueue.enqueue(9.9);
	doubleQueue.enqueue(1.1);
	doubleQueue.enqueue(2.2);
	doubleQueue.enqueue(3.3);
	doubleQueue.enqueue(4.4);
	doubleQueue.enqueue(5.5);
	doubleQueue.print(doubleQueue);
	cout << "\nIs Full?  ";
	//PROCESSING- checking if queue is full
	doubleQueue.isFull();

	return 0;
}
