
#ifndef QUEUES_H_
#define QUEUES_H_

const int QSIZE = 50;
typedef char QDATA[QSIZE];

class Queues {

	public:
		void create();
		void destroy();
		bool empty();
		bool full();
		void insert(char);
		void remove(char&);

	private:
		QDATA data;
		int front, rear;
};

#endif /* QUEUES_H_ */

