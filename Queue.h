/*
Queue.h 
by Nattawut Chaimongkol, August 2017
chaimongkol8369@gmail.com
*/

#ifndef QUEUE_H
#define QUEUE_H

#include<Arduino.h>

template<typename T>
class Queue {

	int16_t _size;
	T * _container;
	T * _temp;
	int16_t _head;
	int16_t _tail;
	int16_t _numberOfElements;

	public:
	Queue(int16_t);
	~Queue();
	void enQueue(T);
	T deQueue();
	void reset();
	T * getValue();
	T front();
	int16_t count();
	bool isEmpty();
	bool isFull();
};

#endif