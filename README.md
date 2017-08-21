# Arduino-Queue-Library
This is Arduino Queue Library for my temperature calibration project.
## Constructor
define Type and length of queue
```
Queue<uint16_t> queue(10);
Queue<float> queue(16);
```
## Method
enQueue() // add element into queue

deQueue() // return element and remove element from queue

reset() // reset queue container

getValue() // return pointer to elements copy from queue

front() // return front element of queue

count() // return number of elements in queue

isEmpty() // return true if queue is empty

isFull() // return true if queue is full

### Result from example
```
............................................................................................................................................ enq: 0 0 count: 1 enq: 1 0 1 count: 2 enq: 2 0 1 2 count: 3 enq: 3 0 1 2 3 count: 4 enq: 4 0 1 2 3 4 count: 5 enq: 5 0 1 2 3 4 5 count: 6 enq: 6 0 1 2 3 4 5 6 count: 7 enq: 7 0 1 2 3 4 5 6 7 count: 8 enq: 8 0 1 2 3 4 5 6 7 8 count: 9 enq: 9 0 1 2 3 4 5 6 7 8 9 count: 10 deq: 0 mean: 4.50 variance: 8.25 stdDev: 2.87
 enq: 10 1 2 3 4 5 6 7 8 9 10 count: 10 deq: 1 mean: 5.50 variance: 8.25 stdDev: 2.87
 enq: 11 2 3 4 5 6 7 8 9 10 11 count: 10 deq: 2 mean: 6.50 variance: 8.25 stdDev: 2.87
 enq: 12 3 4 5 6 7 8 9 10 11 12 count: 10 deq: 3 mean: 7.50 variance: 8.25 stdDev: 2.87
 enq: 13 4 5 6 7 8 9 10 11 12 13 count: 10 deq: 4 mean: 8.50 variance: 8.25 stdDev: 2.87
 enq: 14 5 6 7 8 9 10 11 12 13 14 count: 10 deq: 5 mean: 9.50 variance: 8.25 stdDev: 2.87
 enq: 15 6 7 8 9 10 11 12 13 14 15 count: 10 deq: 6 mean: 10.50 variance: 8.25 stdDev: 2.87
 enq: 16 7 8 9 10 11 12 13 14 15 16 count: 10 deq: 7 mean: 11.50 variance: 8.25 stdDev: 2.87
 enq: 17 8 9 10 11 12 13 14 15 16 17 count: 10 deq: 8 mean: 12.50 variance: 8.25 stdDev: 2.87
 enq: 18 9 10 11 12 13 14 15 16 17 18 count: 10 deq: 9 mean: 13.50 variance: 8.25 stdDev: 2.87
 enq: 19 10 11 12 13 14 15 16 17 18 19 count: 10 deq: 10 mean: 14.50 variance: 8.25 stdDev: 2.87
 enq: 20 11 12 13 14 15 16 17 18 19 20 count: 10 deq: 11 mean: 15.50 variance: 8.25 stdDev: 2.87
 enq: 21 12 13 14 15 16 17 18 19 20 21 count: 10 deq: 12 mean: 16.50 variance: 8.25 stdDev: 2.87
 enq: 22 13 14 15 16 17 18 19 20 21 22 count: 10 deq: 13 mean: 17.50 variance: 8.25 stdDev: 2.87
 enq: 23 14 15 16 17 18 19 20 21 22 23 count: 10 deq: 14 mean: 18.50 variance: 8.25 stdDev: 2.87
 enq: 24 15 16 17 18 19 20 21 22 23 24 count: 10 deq: 15 mean: 19.50 variance: 8.25 stdDev: 2.87
 enq: 25 16 17 18 19 20 21 22 23 24 25 count: 10 deq: 16 mean: 20.50 variance: 8.25 stdDev: 2.87
 enq: 26 17 18 19 20 21 22 23 24 25 26 count: 10 deq: 17 mean: 21.50 variance: 8.25 stdDev: 2.87
 enq: 27 18 19 20 21 22 23 24 25 26 27 count: 10 deq: 18 mean: 22.50 variance: 8.25 stdDev: 2.87
 enq: 28 19 20 21 22 23 24 25 26 27 28 count: 10 deq: 19 mean: 23.50 variance: 8.25 stdDev: 2.87
 enq: 29 20 21 22 23 24 25 26 27 28 29 count: 10 deq: 20 mean: 24.50 variance: 8.25 stdDev: 2.87
 enq: 30 21 22 23 24 25 26 27 28 29 30 count: 10 deq: 21 mean: 25.50 variance: 8.25 stdDev: 2.87
 enq: 31 22 23 24 25 26 27 28 29 30 31 count: 10 deq: 22 mean: 26.50 variance: 8.25 stdDev: 2.87

```
