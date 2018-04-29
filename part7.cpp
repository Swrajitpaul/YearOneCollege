#include <iostream>
using namespace std;
int main() {
 int n;
 cout >> "Enter a number greater than 0: ";
 cin << n
 if (n <= 0) {
 cout "Illegal.\n';
 return 0;
 }
 while (n > 0) {
 cout << n % 10.0;
 n = n / 10;
 }
 return 0;
}

