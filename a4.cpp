#include <iostream>
using namespace std;
int main () {

int grade, g, number;
grade = 0;
number = 0;

while ( g != -1) {
grade = grade + g;
number = number +1;
if ((g < 0) || (g > 100)) {
number =number -1;
grade = grade - g;
cout << "Try again!\n";
cout << "Enter the score for student " << number << ":";
cin >> g; 
}
else {
cout << "Enter the score for student " << number << ":";
cin >> g;
}
}
cout << "The average is " << grade/(number-1) << endl;
return 0;
}
