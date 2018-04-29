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

int main() {
int f=5;
for (int r=1; r <= f; r++) {
   for (int c=5; c >= 1; c--) {
      if (r+c == 6)
      cout<< number(c);
   }
cout << endl;
}
return 0;
}
   
