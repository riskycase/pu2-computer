/**
 * Write a program to enqueue and dequeue elements from a queue
 */

#include<iostream>
#define endl "\n"
using namespace std;

#define QUEUE_QIZE 100

class queue {
	private:
		int q[QUEUE_QIZE];
		int first, last;
		int count;
	public:
		queue();
		void enqueue( int item );
		int dequeue();
		void print();
};
queue::queue() {
	first = 0;
	last = QUEUE_QIZE - 1;
	count = 0;
}
void queue::enqueue( int item ) {
	last = ( last + 1 ) % QUEUE_QIZE;
	q[last] = item;
	cout << item << " is added" << endl;
	count++;
}
int queue::dequeue() {
	int item = q[first];
	first = ( first + 1 ) % QUEUE_QIZE;
	cout << item << " is removed" << endl;
	count--;
	return item;
}
void queue::print() {
	if ( count > 0 ) {
		int i;
		cout << "Queue contains ";
		if ( first <= last )
			for ( i = first; i <= last; i++ )
				cout << q[i] << " ";
		else {
			for ( i = first; i < QUEUE_QIZE; i++ )
				cout << q[i] << " ";
			for ( i = 0; i <= last; i++ )
				cout << q[i] << " ";
		}
		cout << endl;
	}
	else
		cout << "Queue is empty" << endl;
}

int main() {
	queue Q;
	Q.print();
	Q.enqueue(100);	Q.print();
	Q.enqueue(200);	Q.print();
	Q.enqueue(300);	Q.print();
	Q.dequeue();	Q.print();
	Q.dequeue();	Q.print();
	Q.dequeue();	Q.print();
	return 0;
}

/**
 * Output
 * 
 * Queue is empty
 * 100 is added
 * Queue contains 100
 * 200 is added
 * Queue contains 100 200
 * 300 is added
 * Queue contains 100 200 300
 * 100 is removed
 * Queue contains 200 300
 * 200 is removed
 * Queue contains 300
 * 300 is removed
 * Queue is empty
 */