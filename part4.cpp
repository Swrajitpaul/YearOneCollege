#include <iostream>
#include <cmath>
using namespace std;

int number(int n) {
   int a=1;
   while (a < n) {
      cout << a;
      a++;
   }
}
int main () {
int n=5;
for (int r = 1; r <= n; ++r) {
 for (int c = 1; c <= 2*n - 1; ++c) {
 if (r+c <= n || c-r >= n)
    cout << " ";
 else if (c==5) 
    cout << number(2*r-1);
 }
 cout << endl;
 }
return 0;
}
