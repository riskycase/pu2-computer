/**
 * Write a program insert an element into an array
 */

#include<iostream>
#include<process.h>
#define endl "\n"
using namespace std;

class insertion {
	private:
		int n, m[100], ele, pos;
	public: 
		void getData();
		void insert();
		void putData();
};

void insertion::getData() {
	cout << "Enter number of elements" << endl;
	cin >> n;
	for ( int i = 0; i < n; i++ )
		cin >> m[i];
	cout << "Enter element to be inserted" << endl;
	cin >> ele;
	cout << "Enter position to insert into" << endl;
	cin >> pos;
}

void insertion::insert() {
	if ( pos >= n || pos < 0 ) {
		cout << pos << " is invalid position to add " << endl;
		exit(0);
	} else {
		for ( int i = n - 1; i >= pos; i-- )
			m[ i + 1 ] = m[i];
		m[pos] = ele;
		n++;
		cout << "Successfully inserted " << ele << endl;
	}
}

void insertion::putData() {
	cout << "Array is now" << endl;
	for ( int i = 0; i < n; i++ )
		cout << m[i] << " ";
}

int main() {
	insertion I;
	I.getData();
	I.insert();
	I.putData();
	return 0;
}

/**
 * Output
 * 
 * Enter number of elements
 * 3
 * 1 2 4
 * Enter element to be inserted
 * 3
 * Enter position to insert into
 * 2
 * Successfully inserted 3
 * Array is now
 * 1 2 3 4
 *
 * Enter number of elements
 * 3
 * 1 2 3
 * Enter element to be inserted
 * 9
 * Enter position to insert into
 * 8
 * 8 is invalid position to add
 */
