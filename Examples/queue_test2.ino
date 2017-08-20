#include "Queue.h"

Queue<uint16_t> queue(10);

uint16_t value = 0;
#define SAMPLE 10
uint16_t * p;


void setup () {
  
    Serial.begin (9600);
}

void loop () {

	enQueueFunc();

    delay(1000);
}

void enQueueFunc() {

    queue.enQueue(value);
	Serial.print("enq: ");
	Serial.print(value);
	Serial.print(' ');
	Serial.print(" - ");
	value++;
	p = queue.getValue();

	for(int i = 0; i < queue.count(); i++) {
	    
		// Serial.print("q");
		// Serial.print(i);
		// Serial.print(" ");
		Serial.print(p[i]);
		Serial.print(" ");
	}
	Serial.print("count: ");
	Serial.print(queue.count());
	// Serial.println();
	
	if(queue.count() == SAMPLE) {

		uint16_t deqVal = queue.deQueue();
		Serial.print(" deq: ");
		Serial.println(deqVal);
	} 
}

