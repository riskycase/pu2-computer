/**
 * Write a program which calls an overloaded function to calculate the area of
 * a square, triangle or a rectangle
 */

#include<iostream>
#include<math.h>
#define endl "\n"
using namespace std;

class shape {
	public:
		double area( double side ) {
			return side * side;
		}
		double area( double length, double breadth ) {
			return length * breadth;
		}
		double area( double a, double b, double c ) {
			double semi = ( a + b + c ) / 2.0;
			return sqrt( semi * ( semi - a ) * ( semi - b ) * ( semi - c ) );
		}
};

int main() {
	shape S;
	double x, y, z;
	int ch;
	cout << "Enter number of inputs (1, 2 or 3)" << endl;
	cin >> ch;
	switch( ch ) {
		case 1:
			cout << "Enter length of side" << endl;
			cin >> x;
			cout << "Area of square = " << S.area(x);
			break;
		case 2:
			cout << "Enter length and breadth" << endl;
			cin >> x >> y;
			cout << "Area of rectangle = " << S.area(x, y);
			break;
		case 3:
			cout << "Enter lengths of three sides" << endl;
			cin >> x >> y >> z;
			cout << "Area of triangle = " << S.area(x, y, z);
			break;
		default:
			cout << "Invalid input";
	}
	return 0;
}

/**
 * Output
 * 
 * Enter number of inputs (1, 2 or 3)
 * 1
 * Enter length of side
 * 4
 * Area of square = 16
 * 
 * Enter number of inputs (1, 2 or 3)
 * 2
 * Enter length and breadth
 * 2 4
 * Area of rectangle = 8
 * 
 * Enter number of inputs (1, 2 or 3)
 * 3
 * Enter lengths of three sides
 * 3 4 5
 * Area of triangle = 6
 * 
 * Enter number of inputs (1, 2 or 3)
 * 4
 * Invalid input
 */