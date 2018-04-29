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
int smallFactor(int x) {
   int answer = 2;
   while (x % answer != 0) answer++;
   return answer;
}

bool isPrime(int n) {
   if (n == smallFactor(n)) {
      return 1;
   }
   else {
   return 0; 
   }
}

int main() {

for( int a=1; a<9; a++) {

  
 int counter=1;
   int b;
   b = Fibonacci(a);
   if (isPrime(b)== 1) {
      cout << b;
      counter++;
   }   
}   
return 0;
}  
