#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

void printChart (int h[], char c[], int cap, int max){
        for (int r=max; r>=1; r--) {
                for (int col=0; col<cap; col++){
                        if(h[col]>=r) cout << " " << c[col];
                        else cout << " ";
                }
        cout << endl;
        }
}

void swap (int h[], char c[], int a , int b){
        int sp=h[i];
        char tc=c[i];
        h[i]=h[j];
        c[i]=c[j];
        h[j]=sp;
        c[j]=tc;
}

void sort (int h[], char c[], int cap){
        for(int i=0;i<cap-1;i++) {
                int index=minIndex(h,i,cap-1);
                swap(h,c,i,index);
        }
}

int minIndex (int h[], int low, int high){
        int min=low;
        for(int i=low; i<=high; i++)
        if (h[i]<h[min]) min=i;
        return min;
}

int getMax (int h[], int cap){
        int maxVal=h[0];
        for (int i=1; i<cap; i++)
        if(h[i]>maxVal) maxVal=h[i];
        return maxVal;
}

int main() {
        int height[6]={0};
        string char[6];
        cout << "Enter six non-negative integers." << endl;
        for (int i=0; i<6; i++) {
                cout << "Integer" << i << ": ";
                cin >>  height[i];
                while (height[i]<0) {
                        cout << "Please enter a positive number: ";
                        cin >> height[i];
                }
        }
        cout << "Enter six characters." << endl;
        for (int i=0; i<6; i++) {
                cout << "Character: ";
                cin >> char[i];
        }

int maxHeight=getMax(height, 6);

cout << "Unsorted Bar Chart" << endl;
printChart(height, char, 6, maxHeight);
sort(height, char, 6);
cout << endl;
cout << "Sorted Bar  Chart" << endl;
printChart(height, char, 6, maxHeight);

return 0;
}
