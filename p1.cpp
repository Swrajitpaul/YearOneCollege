#include <iostream>
using namespace std;
int main () {
int n;
cin >> n;
for (int r = 1; r <= n; ++r) {
 for (int c = 1; c <= n; ++c) {
 if ((r +c  == 5 && r <= (n+1)/2 ))
 cout << "*";
 else
 cout << " ";
 }
 cout << endl;
}
return 0;
}
