/**
 * Write a program remove an element from an array
 */

#include<iostream>
#include<process.h>
#define endl "\n"
using namespace std;

class deletion {
	private:
		int n, m[100], ele, pos;
	public: 
		void getData();
		void deleteEle();
		void putData();
};

void deletion::getData() {
	cout << "Enter number of elements" << endl;
	cin >> n;
	for ( int i = 0; i < n; i++ )
		cin >> m[i];
	cout << "Enter position to delete from" << endl;
	cin >> pos;
}

void deletion::deleteEle() {
	if ( pos >= n || pos < 0 ) {
		cout << pos << " is invalid position to delete from " << endl;
		exit(0);
	} else {
		ele = m[pos];
		for ( int i = pos; i < n; i++ )
			m[i] = m[ i + 1];
		n--;
		cout << "Successfully deleted " << ele << endl;
	}
}

void deletion::putData() {
	cout << "Array is now" << endl;
	for ( int i = 0; i < n; i++ )
		cout << m[i] << " ";
}

int main() {
	deletion D;
	D.getData();
	D.deleteEle();
	D.putData();
	return 0;
}

/**
 * Output
 * 
 * Enter number of elements
 * 3
 * 1 2 3
 * Enter position to delete from
 * 1
 * Successfully deleted 2
 * Array is now
 * 1 3
 * 
 * Enter number of elements
 * 3
 * 1 2 3
 * Enter position to delete from
 * 7
 * 7 is invalid position to delete from
 */
