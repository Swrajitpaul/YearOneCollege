#include <iostream>
using namespace std;
int smallFactor(int x) {
   int answer = 2;
   while (x % answer != 0) answer++;
   return answer;
}

void isPrime(int n) {
   if (n == smallFactor(n)) 
      cout << "That is prime.";
   else 
      cout << "That is not prime.";
   return;
}
int main () {
int x;
cout << "please enter" << endl;
cin >> x;
isPrime(x);
cout << endl;
return 0;

}
   
