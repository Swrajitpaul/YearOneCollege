#include <iostream>
using namespace std;
int main () {

int grade, g, number;
grade = 0;
number = 0;

while ( g != -1) {
grade = grade + g;
number = number +1;
cout << "Enter the score for student " << number << ":";
cin >> g;
}
cout << "The average is " << grade/(number-1) << endl;
return 0;
}
