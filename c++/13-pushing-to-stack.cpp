/**
 * Write a program to push elements to a stack
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
	char choice;
	int item;
	S.print();
	do {
		cout << "Do you want to push an item? (y/n) ";
		cin >> choice;
		if ( choice == 'Y' || choice == 'y' ) {
			cout << "Enter item ";
			cin >> item;
			S.push(item);
			S.print();
		}
		else {
			cout << "The end" << endl;
			break;
		}
	} while(true);
	return 0;
}

/**
 * Output
 * 
 * Stack is empty
 * Do you want to push an item? (y/n) y
 * Enter item 1
 * 1 successfully added
 * Stack contains 1
 * Do you want to push an item? (y/n) y
 * Enter item 2
 * 2 successfully added
 * Stack contains 1 2
 * Do you want to push an item? (y/n) y
 * Enter item 3
 * 3 successfully added
 * Stack contains 1 2 3
 * Do you want to push an item? (y/n) y
 * Enter item 4
 * Stack is full
 * Stack contains 1 2 3
 * Do you want to push an item? (y/n) n
 * The end
 */