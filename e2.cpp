#include <iostream>
using namespace std;
int main() {
int n;
cout << "Give me an integer between 1 and 9:";
cin >> n;
while (n < 1 || n > 9) {
cout << "Illegal. Try again: ";
cin >> n;
}
for (int r = 1; r <= n; r++) {
for (int c = n;c >= 1 ; c--) cout << r;
cout << endl;
}
return 0;
}
