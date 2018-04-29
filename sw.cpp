#include <iostream>
#include <cmath>
using namespace std;
int number(int n) {
   for(int a=1; a < n; a++) {
      cout << a;
}
}
int main () {
int x;
cout << "Enter an integer: ";
cin >> x;
cout << number(x) << endl;
return 0;
}
