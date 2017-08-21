#include "Queue.h"

Queue<uint16_t> queue(10);

uint16_t value = 0;
#define SAMPLE 10
uint16_t * p;
float mean;
float sum;
float variance;
float diff[SAMPLE];
float sumDiff2;
float standardDeviation;

void setup () {
  
    Serial.begin (9600);
}

void loop () {

    queue.enQueue(value);

	Serial.print(" enq: ");
	Serial.print(value);
	Serial.print(' ');
	// Serial.print(" - ");
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

		mean = 0;
		sum = 0;
		variance = 0;
		sumDiff2 = 0;
		standardDeviation = 0;

		p = queue.getValue();

		for(int i = 0; i < SAMPLE; i++) {
		    
		    sum += p[i];
		}

        mean = sum / SAMPLE;

        for(int i = 0; i < SAMPLE; i++) {

			diff[i] = 0;
            
            diff[i] = p[i] - mean;
            sumDiff2 += pow(diff[i], 2);
        }

        variance = sumDiff2 / SAMPLE;
        standardDeviation = sqrt(variance);

		uint16_t deqVal = queue.deQueue();
		Serial.print(" deq: ");
		Serial.print(deqVal);
		Serial.print(" mean: ");
		Serial.print(mean);
		Serial.print(" variance: ");
		Serial.print(variance);
		Serial.print(" stdDev: ");
		Serial.println(standardDeviation);
	} 

    delay(1000);
}


