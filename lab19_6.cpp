#include <iostream>
using namespace std;

int max(int x, int y) {
  if (x < y) return y;
  return x;
}

void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

void rotate(int &x, int &y, int &z) {
  int temp = x;
  x = y;
  y = z;
  z = temp;
} 

double ratio(int x, int y) {
  return ((double) x) / y;
}

void firstDigit(int x) {
  while (x > 10) x = x / 10;
  cout << x;
}

int main() {
  int a = 3, b = 1, c = 2;
  // (a) Prints the max, here 8
  cout << max(7,8) << endl;
  // (b) Swaps values
  swap(b, c);
  swap(b, c);
  // (c) Rotate a,b,c so as to print 1,2,3
  rotate(a, b, c);
  cout << a << b << c << endl;
  // (d) Print ratio, here 0.75
  cout << ratio(3, 4) << endl;
  // (e) Print the first digit, assume argument is positive. Here 1.
  firstDigit(19683);
  cout << endl;
  return 0;
}
