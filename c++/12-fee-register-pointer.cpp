/**
 * Write a program to input and show student name, register number and fees
 * using pointers
 */

#include<iostream>
#define endl "\n"
using namespace std;

class student {
	private:
		int regno;
		char name[50];
		float fees;
	public:
		void getData();
		void putData();
};

void student::getData() {
	cout << "Enter register number, name and fees" << endl;
	cin >> regno >> name >> fees;
}

void student::putData() {
	cout << "Name: " << name << endl;
	cout << "Register number: " << regno << endl;
	cout << "Fees: Rs." << fees << endl;
}

int main() {
	student s, *sp;
	sp = &s;
	sp -> getData();
	sp -> putData();
	return 0;
}

/**
 * Output
 * 
 * Enter register number, name and fees
 * 123 Ram 100000
 * Name: Ram
 * Register number: 123
 * Fees: Rs.100000
 * 
 * Enter register number, name and fees
 * 108 Shyam 50000
 * Name: Shyam
 * Register number: 108
 * Fees: Rs.50000
 */