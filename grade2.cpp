//Written by professor Kent Chin
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int grade;
	cout << "Enter the grade: ";
	cin >> grade;
	
	if (grade < 0 || grade > 100) {
		cout << "Invalid grade!" << endl;
		exit(1);
	}
	
	//once any if-condition is met, 
	//the rest of the else-ifs will be SKIPPED!
	
	if (grade >= 97) {
		cout << "That's an A+!" << endl;
	} else if (grade >= 93) {
		cout << "That's an A!" << endl;
	} else if (grade >= 90) {
		cout << "That's an A-!" << endl;
	} else if (grade >= 87) {
		cout << "That's a B+!" << endl;
	} else if (grade >= 83) {
		cout << "That's a B!" << endl;
	} else if (grade >= 80) {
		cout << "That's a B-!" << endl;
	} else if (grade >= 77) {
		cout << "That's a C+!" << endl;
	} else if (grade >= 73) {
		cout << "That's a C!" << endl;
	} else if (grade >= 70) {
		cout << "That's a C-!" << endl;
	} else if (grade >= 67) {
		cout << "That's a D+!" << endl;
	} else if (grade >= 60) {
		cout << "That's a D!" << endl;
	} else {
		cout << "That's an F! ):" << endl;
	}

	return 0;
}