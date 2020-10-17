/**
 * Write a program to find the an element in an array using binary search
 */

#include<iostream>
#define endl "\n"
using namespace std;

class binary {
	private:
		int n, m[100], ele, pos;
	public: 
		void getData();
		void find();
		void putData();
};

void binary::getData() {
	cout << "Enter number of elements" << endl;
	cin >> n;
	for ( int i = 0; i < n; i++ )
		cin >> m[i];
	cout << "Enter search element" << endl;
	cin >> ele;
}

void binary::find() {
	pos = -1;
	int lb = 0, ub = n - 1, mid;
	while ( ub >= lb ) {
		mid = ( ub + lb )/2;
		if( m[mid] == ele ) {
			pos = mid;
			break;
		} else if ( m[mid] > ele )
			ub = mid - 1;
		else if ( m[mid] < ele )
			lb = mid + 1;
	}
}

void binary::putData() {
	if( pos >= 0 )
		cout << "Position of " << ele << " is " << pos;
	else
		cout << ele << " does not exist in array";
}

int main() {
	binary B;
	B.getData();
	B.find();
	B.putData();
	return 0;
}

/**
 * Output
 * 
 * Enter number of elements
 * 5
 * 1 2 3 4 5
 * Enter search element
 * 3
 * Position of 3 is 2
 * 
 * Enter number of elements
 * 5
 * 1 2 3 4 5
 * Enter search element
 * 9
 * 9 does not exist in array
 */
