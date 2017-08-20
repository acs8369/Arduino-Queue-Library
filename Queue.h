/*
Queue.h 
by Nattawut Chaimongkol
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

template<typename T>
Queue<T>::Queue(int16_t size) {

	_size = size;
	_head = -1;
	_tail = -1;
	_numberOfElements = 0;
	
	_container = (T*) malloc(sizeof(T) * _size);
	
	if(!_container) {

		Serial.println("error _container memory allocation");
		return;
	}

	_temp = (T*) malloc(sizeof(T) * 8);

	if(!_temp) {

		Serial.println("error _temp memory allocation");
		return;
	}
}

template<typename T>
Queue<T>::~Queue() {

	_size = 0;
	_head = 0;
	_tail = 0;
	_numberOfElements = 0;
	free(_container);
	_container = NULL;
	free(_temp);
	_temp = NULL;
}

// add element into queue
template<typename T>
void Queue<T>::enQueue(T element) {

    if(isFull()) {

    	Serial.println("Queue Overflow"); 
    	return;
    }	

	_tail = (_tail + 1) % _size;
    _container[_tail] = element;
    _numberOfElements++;

	if(_head == -1) {

		_head = _tail;
	}
}

// return element and remove element from queue
template<typename T>
T Queue<T>::deQueue() {

    if(isEmpty()) {

    	Serial.println("Queue is Empty"); 
    	return NULL;
	}

    T element = _container[_head];

    if(_head == _tail) {
        
        _head = -1;
        _tail = -1;
    }

    _head = (_head + 1) % _size;

    _numberOfElements--;

    return element;
}

// reset container
template<typename T>
void Queue<T>::reset() {

	free(_container);
	// _size = size;
	_head = -1;
	_tail = -1;
	_numberOfElements = 0;
	
	_container = (T*) malloc(sizeof(T) * _size);
	
	if(!_container) {

		Serial.println("error _container memory allocation");
		return;
	}
}

// return pointer to elements copy from queue
template<typename T>
T * Queue<T>::getValue() {

	if(isEmpty()) {

		Serial.println("Queue is Empty");
	}

	static T * _temp = (T *) realloc(_temp, sizeof(T) * _numberOfElements);

	if(!_temp) {

		Serial.println("error _container memory allocation");
	}

	for(int i = 0; i < _numberOfElements; i++) {
	    
	    *(_temp + i) = _container[(_head + i) % _size];
	}

    return _temp;
}

// return front element of queue
template<typename T>
T Queue<T>::front() {

	if(isEmpty()) {

		Serial.println("Queue is Empty");
		return;
	} 

    return _container[_head];
}

// return number of elements in queue
template<typename T>
int16_t Queue<T>::count() {

    return _numberOfElements;
}

// return true if queue is empty
template<typename T>
bool Queue<T>::isEmpty() {

	// return _head == -1;
	return _numberOfElements == 0;
}

// return true if queue is full
template<typename T>
bool Queue<T>::isFull() {

	// return (_tail + 1) % _size == _head;
	return _numberOfElements == _size;
}

#endif