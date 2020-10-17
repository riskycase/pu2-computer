/**
 * Write a program to find the frequency of an element in an array and display it
 */

#include<iostream>
#define endl "\n"
using namespace std;

class frequency {
	private:
		int n, m[100], ele, freq;
	public: 
		void getData();
		void findFreq();
		void putData();
};

void frequency::getData() {
	cout << "Enter number of elements" << endl;
	cin >> n;
	for ( int i = 0; i < n; i++ )
		cin >> m[i];
	cout << "Enter search element" << endl;
	cin >> ele;
}

void frequency::findFreq() {
	freq = 0;
	for ( int i = 0; i < n; i++ )
		if ( m[i] == ele )
			freq++;
}

void frequency::putData() {
	if( freq > 0 )
		cout << "Frequency of " << ele << " is " << freq;
	else
		cout << ele << " does not exist in array";
}

int main() {
	frequency F;
	F.getData();
	F.findFreq();
	F.putData();
	return 0;
}

/**
 * Output
 * 
 * Enter number of elements
 * 5
 * 10 20 30 40 50
 * Enter search element
 * 30
 * Frequency of 30 is 1
 * 
 * Enter number of elements
 * 5
 * 10 10 10 10 10
 * Enter search element
 * 20
 * 20 does not exist in array
 */
