#include <iostream>
#include <cmath>
using namespace std;
int Fibonacci(int n) {
   if (n <= 1)
return n;
   else 
   Fibonacci(n-1) + Fibonacci(n-2);
}
int number(int n) {
   for (int c=1; c <= n; c++)
      cout << c;
}
int spaces(int n) {
   for (int c=1; c <= n; c++)
      cout << " ";
}
int main () {

