int main() {
srand(time(0));
 int first=0, last=9;
 for (int r = 1; r <=100; r+=10) {
 cout<<"The range for this row is: << r-9 << "to" << r<<:\t";
 for(int c = 1; c <= r; c++) {
 cout<<randNum(first+r,last+r)<<" ";
 }
 cout<<endl;
 }
 cout << endl;

return 0;
} 
