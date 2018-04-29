// Paul, Swrajit 
// CS111 HW 5
// Making Shapes

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
      if (n % 2 !=1) {
         cout << "enter an odd integer please\n";
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
      cout << endl;
   for (int r = 1; r <= n; ++r) {
      for (int c = 1; c <= n; ++c) {
         /* if row equals this number and column isnt this number then */
         if ((r == ((n+1)/2)-1 && c != (n+1)/2) || ( r == ((n+1)/2)+1 && c != (n+1)/2)
            /* if column equals this number and row isnt this number then */
            || (c == ((n+1)/2)-1 && r !=(n+1)/2) || (c == ((n+1)/2)+1 && r != (n+1)/2)
            /* if row equals this and column equals this then */
            || (r == (n+1)/2 && c==1) || (r == (n+1)/2 && c==n) || (c == (n+1)/2 && r==1)
            || (c == (n+1)/2 && r==n) )
            cout << "*";
         else 
            cout << " ";
         }
   cout << endl;
   }
   return 0;
}
