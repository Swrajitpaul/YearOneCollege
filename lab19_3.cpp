#include <iostream>
using namespace std;
int recursive(int n) {
  if (n < 10) return n;
  return 100 * recursive(n / 100) + 11* (n % 10);
}
int main() {
  int x;
  cout << "Enter an integer: ";
  cin >> x;
  cout << recursive(x) << endl;
  return 0;
}
