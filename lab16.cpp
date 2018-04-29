/*
1) 16
2) 121
3) 169


1)7
2) 5
3)8

1)7
2)32
3) 24

*/
#include <iostream>
#include <cmath>

using namespace std;

double cube(int& n) {
double ans;
ans = n*n*n;
return ans;
}

int main () {
int x=2;
cout << x << endl; 
cube(x);
cout << x << endl;
return 0;
}
 
