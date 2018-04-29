#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

 int randNum (int x, int y) {
int first=0, last=9;
return x;
 return y;
 }

int main() {
srand(time(0));
 int first=0, last=9;

 for (int r = 1; r <= 100; r+=10) {
 cout<<"The range for this row is: "<< r <<" to "<< r+9 <<":\t";
 for(int c = 1; c <= (r+10)/10; c++) {
 int row = ( rand()% r+first)+ (r+last) ;
cout<<randNum(first+row,last+row)<<" ";
 }
 cout<<endl;
 }
 cout << endl;

return 0;
} 
