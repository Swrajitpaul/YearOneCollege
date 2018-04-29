#include <iostream>
using namespace std;
int main () {
   int i = 7.5; double d = 2;
   
   cout << i / d << endl; // line a)
   cout << (double) i / d << endl; // line b)
   cout << i / (int) d << endl; // line c)
   cout << 7 / 2 << endl; // line d)
   cout << 15.0 / 4.0 << ' ' << 2.2 + 5 << endl; // line e)
   cout << 5 * 2.0 << endl; // line f)
   cout << 5 % 3 << endl; // line g)
   cout << 1 + 4 % 5 * 3 << endl; // line h)

   return 0;
}
