#include <iostream> 
using namespace std;

int main() {
	double bill_amt;
	double tip_pct;
	int num_ppl;
	double  per_person;
	cout << "What was you bill amount?" << endl;
	cin >> bill_amt; 
	cout << "What percentage will you like to tip" << endl;
	cin >> tip_pct; 
	cout << "Between how many people will the bill be split" << endl;
	cin >> num_ppl; 
	per_person = (bill_amt+(tip_pct*100))/(num_ppl);
	cout << "you each will pay $"  << per_person  << endl;
return 0;
}
