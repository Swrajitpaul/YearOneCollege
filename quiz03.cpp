//CS111 Sp'15 Quiz#3
#include <iostream>
using namespace std;

int main () {

  cout << "Question 2\n";
  int x = 7, y = 5;
  double d = 2;

  cout << x / y << endl;                          // line a)
  cout << (double) y / d << endl;                 // line b)
  cout << y / (int) d << endl;                    // line c)
  cout << (double) (x / y) << endl;               // line d)
  cout << x % y * d * y << endl;                  // line e)
  cout << x + y / d << endl;                      // line f)
  cout << 25 % 3 << endl;                         // line g)
  cout << 1 - 4 * 5 % (2 + 1) << endl;            // line h)

  cout << "\nQuestion 3c\n";
  x = 13579;
  while (x > 10) x = x/10;
  cout << x << endl;

  cout << "\nQuestion 4\n";
  cout << "Enter your name and the month, day, and year of your birth: ";
  string name;
  int month, day, year;
  cin >> name >> month >> day >> year;
  cout << "Hello " << name << endl;
  if (month == 2 && day == 25)
	  cout << "Happy birthday" << endl;

  cout << "\nBonus\n";
  int a = 5, b = 5;
  cout << "a = " << a << ", b = " << b << endl;
  cout << "Post-increment " << a++ << endl;
  cout << a << endl;
  cout << "Pre-increment " << ++b << endl;
  cout << b << endl;
  return 0;
}
