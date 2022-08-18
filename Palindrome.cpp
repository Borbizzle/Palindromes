//============================================================================
// Name        : Chance Borba
// Class       : CS 2500
// Due Date    : 12- 3- 18
// Assignment  : Palindrome2.ccp
// Description : This programs finds out if a word is a palindrome or not.
//============================================================================


#include  	<string>
#include	<iostream>
#include	"Stacks.h"
#include 	"Queue.h"

using namespace std;

void isPalindrome();


int main()
{
	isPalindrome();
	return 0;

}
void isPalindrome()
{
	string palindrome;
	char charS, charQ;
	unsigned int n=0;
	bool valid = true;

	Stacks stack;
	Queues queue;

	stack.create();
	queue.create();

	cout << "Enter a string to determine wether or not it is a palindrome:";
	getline(cin, palindrome);
	cout << "You entered the following: " << palindrome << endl << endl;

	//This loop pushes and inserts the string into the stack and queue
	while (!stack.full() && !queue.full() && n < palindrome.length ())
	{
		stack.push(palindrome[n]);
		queue.insert(palindrome[n]);
		n++;
	}
// end while


// This loop pops and removes each character from the stack queue, and checks if they are equal
	while(!stack.empty() && !queue.empty())
	{
		stack.pop(charS);
		cout << charS << endl;// testing purposes
		queue.remove(charQ);
		cout << charQ << endl;// testing purposes
		if(charS != charQ)
			valid = false;

	// This print out wheter or not the string is a palindrome
	if(valid)
		cout << palindrome << " is a palindrome.";
	else
		cout << palindrome << " is not a palindrome.";

	stack.destroy();
	queue.destroy();
	} // end isPalindrome
}
