#include <iostream>
#include <cstdlib> //srand, rand
#include <ctime> //time
using namespace std;

int main() {
int x, y;
cout << "enter two intergers please";
cin >> x >> y;
if ( x > y) 
return 0;
cout << rand() % (y - x + 1) + x;    
      //   srand( time(0) ); //don't ask, just do
       // cout << rand() % 100 << endl; //rand # between 0 and 99

            return 0;
            }
