// preocessor directives
#include <iostream>
#include <iomanip>
// namespace for shortcuts
using namespace std;
// main function that returns an integer
int main() {
	// initialization and declaration of variables
	int num, sum = 0;
	// prompts the user to enter a positive integer
	cout << "Enter a positive integer: ";
	// reads value of keyboard and stores the user input in variable num
	cin >> num;
	// while loop to check if the user input is a positive integer
	while (num < 1) {
		// prompts the user to enter a positive integer again
		cout << "Please enter a positive integer: ";
		// reads value of keyboard and stores the user input in variable num
		cin >> num;
	}
	// for loop to iterate from 1 to num
	for (int i = 1; i <= num; i++) {
		// accumulation of the sum of integers from 1 to num
		sum += i;
	}
	// displays the sum of integers from 1 to num
	cout << "Sum = " << sum << endl;
	// returns integer 0, the expected data type for main function
	return 0;
}
