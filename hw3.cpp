// Paul, Swrajit
// CS111 HW 3
// monday and wednesday

#include <iostream>
using namespace std;
int main () {
	// Part 1 
	cout << "PART 1\n";
	// first is a regular variable and middle is the middle two digits
	int eight, first, middle;
	cout << "Please enter a eight digit number: " << endl;
	cin >> eight;
	first = eight % 100000;
	middle = first / 1000;
	cout << "The middle digits are: " << middle << endl;
	if ((middle % 3 == 0) && (middle % 7 !=0)) { 
	cout << "divisible by 3 and not 7\n"; 
	}
	else if ((middle % 3 != 0) && (middle % 7 == 0)) {
	cout << "divisible by 7 and not 3\n";
	}
	else if ((middle % 3 == 0) && (middle % 7 == 0)) {
	cout << "divisible by 3 and 7\n";
	}

	//Part 2 
	cout << "PART 2\n";
	int y;
	cout << "Please enter a year:\n";
	cin >> y;
	if (y % 400 == 0) {	
	cout << "It is a leap year.\n"; }
	else if (y % 100 == 0) {
	cout << "It is NOT a leap year.\n"; }
	else if ((y % 4) == 0) {
	cout << "This is a leap year.\n"; }
	else {
	cout << "This is NOT a leap year.\n"; }
return 0;
}
