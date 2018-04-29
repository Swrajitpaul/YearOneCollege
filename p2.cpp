#include <iostream>
using namespace std;
int main () {
   int n;
   cin >> n;	
   for (int r = 1; r <= n; ++r) {
 for (int c = 1; c <= n; ++c) {
 if ((r == ((n+1)/2)-1 && c != (n+1)/2) || ( r == ((n+1)/2)+1 && c != (n+1)/2) || (c == ((n+1)/2)-1 && r !=(n+1)/2) || (c == ((n+1)/2)+1 && r != (n+1)/2) || (r == (n+1)/2 && c==1) || (r == (n+1)/2 && c==n) || (c == (n+1)/2 && r==1) || (c == (n+1)/2 && r==n) )
 cout << "*";
 else
 cout << " ";
 }
 cout << endl;
}
return 0;
}


