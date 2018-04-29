#include <iostream>
using namespace std;
int main () {
   int grade, g, number, max;
   max = 0;
   grade = 0;
   number = 1;
   cout << "Enter the score for student " << number << ":";
   cin >> g;
   while ( g != -1) {
      grade = grade + g;
      number = number +1; 
      if ((g < 0) || (g > 100)) {
         number = number -1;
         grade = grade - g;
         cout << "Try again.  Enter the score for student " << number << ":";
         cin >> g; 
         if ( g > max && ((g > 0) && (g <=100))) { 
            max= g; }
      }
      else {
         cout << "Enter the score for student " << number << ":";
         cin >> g;
	 if ( g > max && ((g > 0) && (g <=100))) 
	    max =g;
      }
   }
   cout << "The average is " << grade/(number-1) << endl;
   cout << "The highest score is " << max << endl;
   return 0;
}
