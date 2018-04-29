#include <iostream>
using namespace std;
int main () {
   int n, counter;
   counter =0;
   cout << "Enter positive odd integer 4 < n < 30" << endl;
   cin >> n;
   while (counter != 5) {
      if ( n <=4 || n >= 30) {
         cout << "try again\n";
         cin >> n;
      }
      else {
      counter +=5;
      }
   }
   for (int r = 1; r <= n; ++r) {
 for (int c = 1; c <= n; ++c) {
 if (r == c || r+c == n+1) {
 cout << "*"; 
 }
 else if (r == (n+1)/2 || c == (n+1)/2) {
 cout << "*";
 }
 else
 cout << " ";
 }
 cout << endl;
}
return 0;
}
