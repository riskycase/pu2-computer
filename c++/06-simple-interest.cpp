/**
 * Write a program to calculate the simple interest and display it
 */

#include<iostream>
#define endl "\n"
using namespace std;

class interest {
	private:
		double p, t, r, si;
	public: 
		void getData();
		void calculate();
		void putData();
};

void interest::getData() {
	cout << "Enter the principal amount, rate and time" << endl;
	cin >> p >> t >> r;
}

void interest::calculate() {
	si = ( p * t * r ) / 100.0;
}

void interest::putData() {
	cout << "Principal: Rs." << p << endl;
	cout << "Rate: " << r << "%" << endl;
	cout << "Time: " << t << " years" << endl;
	cout << "Interest: Rs." << si <<endl;
}

int main() {
	interest I;
	I.getData();
	I.calculate();
	I.putData();
	return 0;
}

/**
 * Output
 * 
 * Enter the principal amount, rate and time
 * 5000
 * 3
 * 4
 * Principal: Rs.5000
 * Rate: 4%
 * Time: 3 years
 * Interest: Rs.600
 * 
 * Enter the principal amount, rate and time
 * 6000
 * 3
 * 2
 * Principal: Rs.6000
 * Rate: 2%
 * Time: 3 years
 * Interest: Rs.360
 */
