#include <iostream>
#include <cmath>
using namespace std;
int number(int n) {
   for(int a=1; a < n; a++) {
      cout << a;
   }
}
int Fibonacci (int n) {
if (n <= 1)
return n;
else
return Fibonacci(n-1) + Fibonacci(n-2);
}
void spaces(int n) {
   for(int a=1; a <= n; a++) {
      cout << " ";
   }
return;
}


