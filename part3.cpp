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
for (int r=f; r >= 1; r--) {
   for (int c=1; c <= f; c++) {
      if (r+c <6) 
      cout << " ";
       
   }
   cout << number(r);
cout << endl;
}
return 0;
}
