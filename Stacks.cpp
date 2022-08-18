
#include "Stacks.h"

//This function creates the stack when called
void Stacks::create() {

	top = 0;
}

//This function destroys the stack
void Stacks::destroy() {

	top = 0;
}

//This function lets us know if the stack is empty
bool Stacks::empty() {

	return (top == 0);
}

//This function lets us know if the stack is full
bool Stacks::full() {

	return (top >= SSIZE);
}

//Adds item to stack
void Stacks::push(char item) {

	data[top++] = item;
}

//Removes item from stack
void Stacks::pop(char& item) {

	item = data[--top];
}

