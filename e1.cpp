#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int randNum (int x, int y) {
return rand()%(y-x+1)+(y-10);
}
int main() {
srand(time(0));
 int first=0, last=9;
 for (int r = 1; r <=100; r+=10) {
 cout<<"The range for this row is: "<< r+first <<" to "<< r+last<<":\t";
 for(int c = 1; c <= (r+10)/10; c++) {
 cout<<randNum(first+r,last+r)<<" ";
 }
 cout<<endl;
 }
 cout << endl;

return 0;
}
