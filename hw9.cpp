// paul, swrajit
// cs111, hw 9

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printArray(int x[], int size) {
   for (int i=0; i < size; i++) {
      cout << x[i] << " ";
   }
   cout << endl;
}

int findMax(int x[], int size) {   
   int max = x[0];
   for (int i=0; i <size; i++){     
      if (x[i] > max) 
         max = x[i];
   }
   cout << max;
}
int main() {
   int array[20] = { };
   srand(time(0)); 
   int random;
   for (int c = 0; c < 20; c++) {
      random = rand() % 41 + 60;
      array[c]= random;
   }
   cout << "all entries in the array\n";
   printArray(array, 20);
   cout << findMax(array, 20) << endl;
//cout << findMin(array, 20) << endl;
//cout << findAverage(array, 20) << endl;
//cout << findMinGap(array, 20) << endl;
return 0;
}
