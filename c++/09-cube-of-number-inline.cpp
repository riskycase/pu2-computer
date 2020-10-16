/**
 * Write a program which calls an inline function to cube a number
 */

#include<iostream>
#include<math.h>
#define endl "\n"
using namespace std;

class test {
	public:
		inline double cube ( double a ) {
			return a * a * a;
		}
};

int main() {
	test T;
	double x;
	cout << "Enter a number ";
	cin >> x;
	cout << "Cube of " << x << " is " << T.cube(x);
	return 0;
}

/**
 * Output
 * 
 * Enter a number 3
 * Cube of 3 is 27
 * 
 * Enter a number -5
 * Cube of -5 is -125
 */