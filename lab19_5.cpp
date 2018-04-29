#include <iostream>
using namespace std;
int recursive (int n) {
  if (n < 10) return n;
  return 100 * recursive (n / 100) + 10 * (n % 10);
}
int mystery (int x) {
  cout << x << "54321";
  return x;
}
int main () {
  cout << recursive (7) << endl; 	//line A
  cout << recursive (135) << endl; 	//line B
  cout << recursive (19683) << endl; 	//line C
  cout << mystery (2) << endl; 		//line D
  mystery (2); 				//line E
  cout << endl;
  return 0;
}
