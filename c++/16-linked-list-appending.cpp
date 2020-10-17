/**
 * Write a program to create a linked list and append elements to it
 */
 
#include<iostream>
#define endl "\n"
using namespace std;

class linklist {
	private:
		struct Node {
			int data;
			Node* link;
		}*START;
	public:
		linklist();
		void print();
		void append( int item );
		void count();
};

linklist::linklist() {
	START = NULL;
}

void linklist::print() {
	if ( START == NULL )
		cout << "Linked list is empty" << endl;
	else {
		cout << "Linked list contains ";
		Node* pointer = START;
		while( pointer != NULL ) {
			cout << pointer -> data <<" ";
			pointer = pointer -> link;
		}
		cout << endl;
	}
}

void linklist::append(int item) {
	Node *newNode;
	newNode = new Node;
	newNode -> data = item;
	newNode -> link = NULL;
	
	if( START == NULL ) {
		START = newNode;
		cout << item << " is inserted as the first node" << endl;
	} else {
		Node* pointer = START;
		while( pointer -> link != NULL ) 
			pointer = pointer -> link;
		pointer -> link = newNode;
		cout << item << " is inserted" << endl;
	}
}

void linklist::count() {
	int count = 0;
	for( Node* pointer = START; pointer != NULL; pointer = pointer -> link) 
		count++;
	cout << "Number of nodes in the linked list are " << count << "" << endl;
}

int main() {
	linklist* LL = new linklist();
	
	LL->print();
	LL->append(100);
	LL->print();
	LL->count();
	
	LL->append(200);
	LL->print();
	LL->count();
	
	LL->append(300);
	LL->print();
	LL->count();
	
	return 0;
}

/**
 * Output
 * 
 * Linked list is empty
 * 100 is inserted as the first node
 * Linked list contains 100
 * Number of nodes in the linked list are 1
 * 200 is inserted
 * Linked list contains 100 200
 * Number of nodes in the linked list are 2
 * 300 is inserted
 * Linked list contains 100 200 300
 * Number of nodes in the linked list are 3
 */