#include <iostream>
using namespace std;

int sumEven(int x) {
  if (x <= 0) return 0;
  if (x % 2 == 0) return x%10 + sumEven(x/10);
  return sumEven(x/10);
}

int firstDown(int x) {
  if (x < 10) return x - 1;
  return 10* firstDown(x/10) + x % 10;
}

int main() {
  cout << sumEven(23) << endl; // prints 2
  cout << sumEven(1212) << endl; // prints 4
  cout << sumEven(777) << endl; // prints 0, because there are none
  cout << firstDown(2048) << endl; // prints 1048
  cout << firstDown(19683) << endl; // prints 9683
  return 0;
}
