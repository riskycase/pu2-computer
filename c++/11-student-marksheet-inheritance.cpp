/**
 * Write a program to display a student marksheet using the concept of 
 * inheritance
 */

#include<iostream>
#define endl "\n"
using namespace std;

class student {
	private:
		int rno;
		char name[50];
	public:
		void getDataBase() {
			cout << "Enter roll number and name" << endl;
			cin >> rno >> name;
		}
		void putDataBase() {
			cout << "Name: " << name << endl;
			cout << "Roll number: " << rno << endl;
		}
};

class marks : public student {
	private:
		int sub1, sub2, total;
	public:
		void getDataDerived() {
			cout << "Enter marks in two subjects" << endl;
			cin >> sub1 >> sub2;
			total = sub1 + sub2;
		}
		void putDataDerived() {
			cout << "Subject 1: " << sub1 << endl;
			cout << "Subject 2: " << sub2 << endl;
			cout << "Total marks: " << total << endl;
		}
};

int main() {
	marks m;
	m.getDataBase();
	m.getDataDerived();
	m.putDataBase();
	m.putDataDerived();
	return 0;
}

/**
 * Output
 * 
 * Enter roll number and name
 * 21 Krishh
 * Enter marks in two subjects
 * 95 96
 * Name: Krishh
 * Roll number: 21
 * Subject 1: 95
 * Subject 2: 96
 * Total marks: 191
 * 
 * Enter roll number and name
 * 40 Henry
 * Enter marks in two subjects
 * 80 30
 * Name: Henry
 * Roll number: 40
 * Subject 1: 80
 * Subject 2: 30
 * Total marks: 110
 */