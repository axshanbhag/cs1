

Page
1
of 2
// preocessor directives
#include <iostream>
#include <iomanip>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// prints out information regarding mobile phone service provider plans
cout << "Mobible Phone Service Provider Plans: " << endl;
cout << "Package A: For $39.99 per month, 4 gigabytes are provided.
Additional data costs $10 per gigabyte (prorated). " << endl;
cout << "Package B: For $59.99 per month, 8 gigabytes are provided.
Additional data costs $5 per gigabyte (prorated)." << endl;
cout << "Package C: For $69.99 per month, unlimited data is provided." <<
endl;
// declare variables
char package;
double gigabytes, total;
// prompts the user to enter a package
cout << "Enter the package you have purchased (A, B, or C): ";
// reads the information from the keyboard and stores it in the variable,
package
cin >> package;
// checks if user input is valid
if (package != 'A' && package != 'B' && package != 'C' && package != 'a' &&
package != 'b' && package != 'c') {
cout << "Invalid input. Please enter A, B, or C." << endl;
} else {
// checks if the package is package A
if (package == 'A' || package == 'a') {
// prompts the user to enter the number of gigabytes used
cout << "Enter the number of gigabytes used: ";
// reads the information from the keyboard and stores it in the
variable, gigabytes
cin >> gigabytes;
// if gigabytes is less than or equal to 4, then it is the base
rate
if (gigabytes <= 4) {
total = 39.99;
} else { //prorated cost for additional gigabytes
total = 39.99 + ((gigabytes - 4) * 10);
}
} else if (package == 'B' || package == 'b') {
// prompts the user to enter the number of gigabytes used
cout << "Enter the number of gigabytes used: ";
// reads the information from the keyboard and stores it in the
variable, gigabytes
cin >> gigabytes;
// if gigabytes is less than or equal to 8, then it is the base
rate
if (gigabytes <= 8) {
total = 59.99;
} else { //prorated cost for additional gigabytes
total = 59.99 + ((gigabytes - 8) * 5);
}
// package C has a flat rate
} else if (package == 'C' || package == 'c') {
total = 69.99;
}
// prints out the total amount due with two decimal places
cout << fixed << setprecision(2);
cout << "The total amount due: $" << total << endl;
}
// returns integer 0, the expected data type for main function
return 0;
}
