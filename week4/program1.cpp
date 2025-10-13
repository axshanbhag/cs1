

// preprocessor directive
#include <iostream>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// declare two integer variables
int num1, num2;
// prompts the user to a number
cout << "Enter a number: ";
// reads the information from the keyboard and stores it in the variable,
num1
cin >> num1;
// prompts the user for second number
cout << "Enter another number: ";
// reads the information from the keyboard and stores it in the variable,
num2
cin >> num2;
// checks if num1 is greater than num 2
if (num1 > num2) {
// prints out that num1 is larger number and num2 is smaller number if
it is true
cout << num1 << " is the larger number. " << num2 << " is the smaller
number." << endl;
// checks is num2 is greater than num1
} else if (num1 < num2) {
// prints out that num2 is larger number and num1 is smaller number if
it is true
cout << num2 << " is the larger number. " << num1 << " is the smaller
number." << endl;
} else { // if the two numbers are equal
cout << num1 << " is equal to " << num2 << endl;
}
// returns integer 0, the expected data type for main function
return 0;
}
