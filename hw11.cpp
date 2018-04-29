#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int array2D[10][10];
  int sum100s = 0, sum10s = 0, sum1s = 0;

  //fill 10x10 array with random numbers between 100 and 1000
    for (int x = 0; x<10 ; x++)
      for (int y = 0; y<10 ; y++)
         array2D[x][y] = rand()%900+100;

               //sum the three digits
                 for (int x = 0; x<10 ; x++)
                     for (int y = 0; y<10 ; y++)
                         {
                               sum100s +=  array2D[x][y] / 100;
                                     sum10s  += (array2D[x][y] % 100) / 10;
                                          sum1s   +=  array2D[x][y] % 10;
                                               }

                                                 //Which digit is the largest?  Print the column;
                                                   if (sum100s >= sum10s && sum100s >= sum1s) //100s is largest
                                                     {
                                                         cout << "100s digit is the largest with: ";
                                                             for (int x = 0; x<10 ; x++)
                                                                   for (int y = 0; y<10; y++){                                                                          cout << array2D[x][y] / 100 << ",";
                                                                            }}
                                                                                else if (sum10s >= sum1s) // 10s is largest
                                                                                 {
                                                                                     cout << "10s digit is the largest with: ";
                                                                                         for (int x = 0; x<10 ; x++)
                                                                                               for (int y = 0; y<10; y++)
                                                                                                       cout << (array2D[x][y] % 100) / 10 << ",";
                                                                                                         }
                                                                                                           else // 1s is largest
                                                                                                             {
                                                                                                                 cout << "1s digit is the largest with: ";
                                                                                                                     for (int x = 0; x<10 ; x++)
                                                                                                                           for (int y = 0; y<10; y++)
                                                                                                                                   cout << (array2D[x][y] % 10) << ",";
                                                                                                                                     }
                                                                                                                                       
                                                                                                                                         return 0;
                                                                                                                                        }
 
