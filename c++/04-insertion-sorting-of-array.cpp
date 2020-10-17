/**
 * Write a program to sort the elements of an array using insertion sort
 */

#include<iostream>
#define endl "\n"
using namespace std;

class sorting {
	private:
		int n, m[100];
	public: 
		void getData();
		void sort();
		void putData();
};

void sorting::getData() {
	cout << "Enter number of elements" << endl;
	cin >> n;
	for ( int i = 0; i < n; i++ )
		cin >> m[i];
}

void sorting::sort() {
	int temp, i, j;
	for ( i = 1; i < n; i++ ) {
		j = i;
		while ( j > 0 && m[j] < m[ j - 1 ] ) {
			temp = m[j];
			m[j] = m[j-1];
			m[j-1] = temp;
			j--;
		}
	}
}

void sorting::putData() {
	cout << "Array is now" << endl;
	for ( int i = 0; i < n; i++ )
		cout << m[i] << " ";
}

int main() {
	sorting S;
	S.getData();
	S.sort();
	S.putData();
	return 0;
}

/**
 * Output
 * 
 * Enter number of elements
 * 5
 * 5 4 3 2 1
 * Array is now
 * 1 2 3 4 5
 * 
 * Enter number of elements
 * 10
 * 10 5 4 65 34 56 7 3 354 7
 * Array is now
 * 3 4 5 7 7 10 34 56 65 354
 */
