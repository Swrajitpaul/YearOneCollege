#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int abs (int x) {
   if (x < 0){
   int y;   
   y = x*(-1);
   return y;
   }
   else {
   x = x;
   return x;
   }
}
int main() {
   int n;
   cout << "Enter a integers" << endl;
   cin >> n;
   cout << abs(n) << endl;
return 0;
}

