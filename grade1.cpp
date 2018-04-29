//Written by professor Kent Chin
#include <iostream>
#include <cstdlib> //exit

using namespace std;

int main() {
	int grade;
	cout << "Enter your grade: ";
	cin >> grade;
	
	if (grade < 0 || grade > 100) { //grade less than 0 OR grade greater than 100
		cout << "Impossible!" << endl;
		exit(1); 
	}
	
	if (grade >= 65) {
		cout << "You've passed!" << endl;
	} else {
		cout << "You've failed!" << endl;
	}

	return 0;
}