#include <iostream>
using namespace std;
int fib(int n) {
int b =1;
for (int a=1; a <= n; a++){
cout << b << endl;
b=b+b;
}
}
int main(){
cout << fib(5);

return 0;
}
