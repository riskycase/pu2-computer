/**
 * Write a program to find the roots of a quadratic equation and display them
 */

#include<iostream>
#include<math.h>
#include<process.h>
#define endl "\n"
using namespace std;

class quadratic {
	private:
		double a, b, c, r1, r2, disc;
	public: 
		void getData();
		void calculate();
		void putData();
};

void quadratic::getData() {
	cout << "Enter the coeffecients" << endl;
	cin >> a >> b >> c;
}

void quadratic::calculate() {
	disc = ( b * b ) - ( 4 * a * c );
	if ( disc > 0 ) {
		cout << "Roots are real and distinct" << endl;
		r1 = ( -b + sqrt(disc) ) / ( 2 * a );
		r2 = ( -b - sqrt(disc) ) / ( 2 * a );
	}
	else if ( disc == 0 ) {
		cout << "Roots are real and equal" << endl;
		r1 = -b / ( 2 * a );
		r2 = r1;
	}
	else {
		cout << "Roots are imaginary" << endl;
		exit(0);
	}
}

void quadratic::putData() {
	cout << "First root is " << r1 << endl;
	cout << "Second root is " << r2 << endl;
}

int main() {
	quadratic Q;
	Q.getData();
	Q.calculate();
	Q.putData();
	return 0;
}

/**
 * Output
 * 
 * Enter the coeffecients
 * 1 -2 1
 * Roots are real and equal
 * First root is 1
 * Second root is 1
 * 
 * Enter the coeffecients
 * 1 3 2
 * Roots are real and distinct
 * First root is -1
 * Second root is -2
 * 
 * Enter the coeffecients
 * 1 1 1
 * Roots are imaginary
 */
