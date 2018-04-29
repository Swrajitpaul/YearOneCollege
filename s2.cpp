#include <iostream>
#include <cmath>
using namespace std;
void spaces(int n) {
   for(int a=1; a <= n; a++) {
      cout << " "; 
}
return;
}
int main () {
int x;
cout << "Enter an integer: ";
cin >> x;
spaces(x);
cout << endl;
return 0;
}
