/**
 * Write a program to calculate the sum of powers and demonstrate the concept of 
 * copy constructor
 */

#include<iostream>
#define endl "\n"
using namespace std;

class copyCon {
	private:
		int a, n;
	public:
		int calculate();
		copyCon ( int aa, int nn ) {
			a = aa;
			n = nn;
		}
};

int copyCon::calculate() {
	int sum = 1, next = a;
	for (int i = 1; i <= n; i++) {
		sum += next;
		next *= a;
	}
	return sum;
}

int main() {
	int x, n;
	cout << "Enter base and number of terms" << endl;
	cin >> x >> n;
	copyCon obj(x, n);
	copyCon cpy = obj;
	cout << "Sum of powers in original = " << obj.calculate() << endl;
	cout << "Sum of powers in copy = " << cpy.calculate() << endl;
	return 0;
}

/**
 * Output
 * 
 * Enter base and number of terms
 * 3 2
 * Sum of powers in original = 13
 * Sum of powers in copy = 13
 * 
 * Enter base and number of terms
 * 2 3
 * Sum of powers in original = 15
 * Sum of powers in copy = 15
 */