#include <iostream> 
using namespace std;
int main () {
	int x, y;
	cout << "Please enter two positive integers; ";
	cin >> x >> y;
	if (x <= 0) x = y;
	if (y <= 0) {
	   cout << "illegal" << endl;
	   return 0;
	}
	if (x <= 10) cout << y << x << endl;
	while (y > 0) {		
	cout << y;
	y = y/10;
	}
	cout << x << endl;
	return 0;
}
