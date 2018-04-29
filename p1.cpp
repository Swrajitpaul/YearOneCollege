#include <iostream>
#include <cmath>
using namespace std;
int number(int n) {
   for (int c=1; c <= n; c++)
      cout << c << endl;
}
int spaces(int n) {
   for (int c=1; c <= n; c++)
      cout << " ";
     cout << endl;
}
int main() {
int x;
cout << "enter" << endl;
cin >> x;
for (int r=1; r<=x; r++) {
     cout << number(x);
     cout << spaces(x-1);
} 
return 0;
}
