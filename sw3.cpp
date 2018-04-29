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
int main () {
int x;
cout << "Enter an integer: ";
cin >> x;
cout << number(x) << endl;
return 0;
}


