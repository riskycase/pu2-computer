/**
 * Write a program to pop elements to a stack
 */

#include<iostream>
#define endl "\n"
using namespace std;

#define MAX 3

class stack {
	private:
		int arr[MAX], top;
	public:
		stack() {
			top = -1;
		}
		void push( int item ) {
			if ( top == MAX - 1 )
				cout << "Stack is full" << endl;
			else {
				top++;
				arr[top] = item;
				cout << item << " successfully added" << endl;
			}
		}
		void pop() {
			if ( top == -1 )
				cout << "Stack is empty" << endl;
			else {
				cout << arr[top] << " is popped" << endl;
				top--;
			}
		}
		void print() {
			if ( top == -1 )
				cout << "Stack is empty" << endl;
			else {
				cout << "Stack contains ";
				for ( int i = 0; i <= top; i++ )
					cout << arr[i] << " ";
				cout << endl;
			}
		}
};

int main() {
	stack S;
	S.print();
	S.push(100);	S.print();
	S.push(200);	S.print();
	S.push(300);	S.print();
	S.pop();	S.print();
	S.pop();	S.print();
	S.pop();	S.print();
	return 0;
}

/**
 * Output
 * 
 * Stack is empty
 * 100 successfully added
 * Stack contains 100
 * 200 successfully added
 * Stack contains 100 200
 * 300 successfully added
 * Stack contains 100 200 300
 * 300 is popped
 * Stack contains 100 200
 * 200 is popped
 * Stack contains 100
 * 100 is popped
 * Stack is empty
 */