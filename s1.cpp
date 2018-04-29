#include <iostream>
#include <cmath>
using namespace std;
void Fibonacci (int n) {
if (n <= 1)
cout << n;
else
return Fibonacci(n-1) + Fibonacci(n-2);
}

int main () {
int x;
cout << "enter an integer: ";
cin >> x;
 Fibonacci(x);
cout << endl;
return 0;
}


