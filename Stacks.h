
#ifndef STACKS_H_
#define STACKS_H_

const int SSIZE = 50;
typedef int SDATA[SSIZE];

class Stacks {

	public:
		void create();
		void destroy();
		bool empty();
		bool full();
		void push(char);
		void pop(char&);

	private:
		SDATA data;
		int top;
};

#endif /* STACKS_H_ */

