// Paul, Swrajit
// CS111, HW 7

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
   int a=1;
   int counter=0;
   cout << "Fibonacci and prime\n";
   while (counter !=6) {
      int b;
      b = Fibonacci(a);
      if (isPrime(b) == true){
         cout << b << " ";
         a++;
         counter++;
      }
      else a++;
   }
cout << endl;

//diagram 1
cout << "Diagram 1\n";
int f=5;
for (int r=1; r <= f; r++) {
   for (int c=1; c <= f; c++) {
      if (c <= r)
         cout<< number(c=r);
   }
   cout << endl;
}
cout << endl;

//diagram 2
cout << "Diagram 2\n";
for (int r=f; r >= 1; r--) { 
   for (int c=1; c <= f; c++) {
      if (r+c <6) 
         cout << " ";
   }
   cout << number(r);
   cout << endl;
}
cout << endl;

//diagram 3
cout << "Diagram 3\n";
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
cout << endl;

//daigram 4
cout << "Diagram 4\n";
for (int r=1; r <= f; r++) {
   for (int c=5; c >= 1; c--) {
      if (r+c == 6)
         cout<< number(c);
   }
   cout << endl;
}
return 0;
}  
