#include <iostream>
using namespace std;
int main () {
	//part 1 
	double number;
	cout << "Part A:" << endl;
	cout << "Enter a number greater than 0 and less than 10: ";
	cin >> number;
	/* if the number is greater than 0 and less than 10,
	it prints out the square of the number */
	if (( number < 10) && (number > 0))cout << "The square is: "  <<  number * number  << endl;
	// if the condition is not met then the program ends         
	else return 0;
	
	//part 2
	// first = first digit, middle = middle digit, last = last digit 
	int p, first, middle, last;
	cout << "Part B: " << endl;
	cout << "Please input 3-digit positive integer. " ;
	cin >> p;
	if ( p < 100 ) {
	cout << " Error; You entered a 2-digit number " << endl; 
	}
        else if ( p >= 1000 ) {
	cout << " Error: You entered a 4-digit number " << endl;
	return 0; } 
	else {
	first = p / 100;
	middle = p % 100;
	last = middle % 10;
	middle = middle / 10;
	 
	 cout << "The product of all digits in " << p << " is "
 	<< first * middle * last << endl; 
	}
return 0;
}
