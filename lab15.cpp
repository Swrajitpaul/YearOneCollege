#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int quad(int a, int b, int c, double x) {
int ans;
a = a*(x*x);
b = b*x;
ans = a+b+c;
return ans;
}

int main () {

/* 
 1a) get_char_at
    char
string a and int i

 1b) sayGoodMorning 
   void
    0

 2a) string justprint (int number)
 2b) int longest (int x, int y, int z)
 2c) double average (double x, double y, double z)

 #include <iostream>
#include <cmath> //to use the square root function
using namespace std;
int main() {
 double n;
 cout << "Give me a number: ";
 cin >> n;
 cout << "square root of " << n << ": " << sqrt(n) << endl;
 return 0;
}

4) Write C++ statements to carry out the following tasks. Do not write complete programs, just
give a single line, or a few lines of C++ instructions.
(From prac1.pdf) Print 10 random numbers each between 10 and 20 to the output screen:

for ( int c=1; c<=10; c++) (rand() % 11)+10;
(From prac2.pdf) Print a sequence of 15 random integer values each between 7 and 36

for (int d=1; d<=15; d++) (rand%30)+7;
(inclusive) to the screen.
(From prac2.pdf) Print to the screen every four digit number n that is an exact multiple of 7 and
an exact multiple of 11. Print one number per line. (For example 1000 would not be printed but
1001 would be printed since 1001 = 7 ×143 and 1001 = 11 ×91.)*/

int a, b, c, x;
cin >> a >> b >> c >> x;
cout << quad(a,b,c,x);
return 0;
}



