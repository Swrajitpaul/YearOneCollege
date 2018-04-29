#include <iostream>
using namespace std;
int main() {
int n;
cout << "Give me an integer between 1 and 15:";
cin >> n;
while (n < 1 || n > 15) {
cout << "Illegal. Try again: ";
cin >> n;
}
for (int r = 1; r <= n; r++) {
for (int c = 1; c <= n; c++)
if ((c == r) || (c == r - 1)) cout << " ";
else cout << "O";
cout << endl;
}
return 0;
}
