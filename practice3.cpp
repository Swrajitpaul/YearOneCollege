#include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter a positive integer less than 1000: ";
cin >> n;
if (n <= 0 || n >= 1000) {
cout << "Wrong!" << endl;
return 0;
}
int ans = 1;
while (n > 0) {
ans = ans * (n % 10);
n = n / 10;
}
cout << "Product of digits: " << ans << endl;
return 0;
}
