#include <iostream>
using namespace std;

int pairs(int n) {
   if (n < 100){       
      cout << n << "=";
      return n;
   }
   else {
      cout << n%100 << "+";
      return pairs(n/100) + (n%100);
   }
}
int main () {
int x;
cout << "enter a integer greater than 0 please\n";
cin >> x;
while (x <= 0){
   cout << "enter a integer greater than 0\n";
   cin >> x;
}
cout << pairs(x);
cout << endl;
return 0;
} 
