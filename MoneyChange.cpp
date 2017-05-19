// Make Change
// Ian Johnson
// 2017-01-18

#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	
	double amountOwed = 0.0;	// used to store the cost of the item
	double amountPaid = 0.0;	// used to store the amount paid
	
	// get amount owed
	cout << "Enter cost of item: $";
	cin >> amountOwed;
	cout << endl;
	
	// get amount paid
	cout << "Enter amount paid: $";
	cin >> amountPaid;
	cout << endl;
	
	// calculate change amount
	double amountChange = amountPaid - amountOwed;		// Calculate the amount of change required
	
	// calculate change breakdown
	// $1, 5, 10, 20
	// 25c, 10, 5, 1
	amountChange = amountChange * 100;
	
	int twenties = static_cast<int>(amountChange)/2000;
	int tens = static_cast<int>(amountChange)%2000/1000;
	int fives = static_cast<int>(amountChange)%2000%1000/500;
	int ones = static_cast<int>(amountChange)%2000%1000%500/100;
	int quarters = static_cast<int>(amountChange)%2000%1000%500%100/25;
	int dimes = static_cast<int>(amountChange)%2000%1000%500%100%25/10;
	int  nickels = static_cast<int>(amountChange)%2000%1000%500%25%10/5;
	int pennies = static_cast<int>(amountChange)%2000%1000%500%25%10%5;
	
	cout << "Change due: $" << amountChange / 100 << endl;
	if (amountChange != 0) {
		if (twenties != 0) {
			cout << "Twenties: " << twenties << endl;
		}
		if (tens != 0) {
			cout << "Tens: " << tens << endl;
		}
		if (fives != 0) {
			cout << "Fives: " << fives << endl;
		}
		if (ones != 0) {
			cout << "Ones: " << ones << endl;
		}
		if (quarters != 0) {
			cout << "Quarters: " << quarters << endl;
		}
		if (dimes != 0) {
			cout << "Dimes: " << dimes << endl;
		}
		if (nickels != 0) {
			cout << "Nickels: " << nickels << endl;
		}
		if (pennies != 0) {
			cout << "Pennies: " << pennies << endl;
		}
	}
	return 0;
}