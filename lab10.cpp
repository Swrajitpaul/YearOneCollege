#include <iostream>
using namespace std;
int main () {
   int positive;
   cin >> positive;
   if (0 >= positive) {
       return 0;
   }
   for (int r =1; r <=positive; r++) {
	for (int c =1; c <= (2*positive); c++) {
	     cout << "*";
	}
   cout << endl;
   }

   cout << "part 2" << endl;

   int n;

   return 0;
}
