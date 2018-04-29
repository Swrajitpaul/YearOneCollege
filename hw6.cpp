// Paul, Swrajit 
// CS111 , HW 6
// monday and wednesday

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int randNum (int x, int y) {
   return rand()%(y-x+1)+(y-10);
}
void fun1(int n) {
   for (int r=1; r <=n; r++) {
      for (int c=1; c <=n; c++){
         if (c >=r) 
	    cout << "X";
         else 
            cout << "O";
      }
   cout << endl;
   }
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

//question 2
int a;
cout << "Enter a positive integer less than 10: ";
cin >> a;
while ((a <=0)||(a >=10)) {
   cout << "Try again, 0 < integer < 10" << endl;
   cin >> a; 
}
fun1(a);
return 0;
}
