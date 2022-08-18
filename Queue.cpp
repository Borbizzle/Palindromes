

#include "Queue.h"

//Creates a queue
void Queues::create() {

	front = rear = 0;
}

//Destroys the queue
void Queues::destroy() {

	front = rear = 0;
}

//Checks if queue is empty
bool Queues::empty() {

	return (front == rear);
}

//Checks if queue is full
bool Queues::full() {

	return ((rear + 1) % QSIZE == front);
}

void Queues::insert(char item) {

	data[rear++] = item;
	if (rear == QSIZE) {
		rear = 0;
	}
}

void Queues::remove(char& item) {

	item = data[front++];
	if (front == 0) {
		front = QSIZE;
	}
}
