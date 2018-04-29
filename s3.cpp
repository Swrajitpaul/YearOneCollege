#include <iostream>
using namespace std;

int smallFactor(int x) {
   int answer = 2;
   while (x % answer != 0) answer++;
   return answer;
}

bool isPrime(int n) {
   if (n == smallFactor(n)) {
      return true;
   }
   else {
      return false;
   }
}
int main () {
int x;
cout << "please enter" << endl;
cin >> x;
cout << isPrime(x);
cout << endl;
return 0;

}
   
