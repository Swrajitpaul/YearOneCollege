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
   for (int c=1; c <= f; c++) {
      if (c <= r) 
      cout<< number(c=r);
   }
cout << endl;
}
return 0;
}
