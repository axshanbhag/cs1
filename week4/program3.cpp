
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
double gigabytes, totalB, totalA, total, savingsA, savingsB, savingsC;
const double priceC = 69.99, priceB = 59.99, priceA = 39.99;
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
total = priceA;
} else { //prorated cost for additional gigabytes
total = priceA + ((gigabytes - 4) * 10);
// check is user would save money by switching package B
if (total > priceB) {
if (gigabytes <= 8) { // if the user uses less than 8
gigabytes, then it is the base rate
savingsB = total - priceB;
} else {
totalB = priceB + ((gigabytes - 8) * 5);
savingsB = total - totalB;
}
cout << "You could've saved $" << fixed <<
setprecision(2) << savingsB << " by switching to Package B." << endl;
}
if (total > priceC) { // check if user would save money by
switching package C
savingsC = total - priceC;
cout << "You could've saved $" << fixed <<
setprecision(2) << savingsC << " by switching to Package C." << endl;
}
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
total = priceB;
} else { //prorated cost for additional gigabytes
total = priceB + ((gigabytes - 8) * 5);
if (total > priceC) { // check if user would save money by
switching package C
savingsC = total - priceC;
cout << "You could've saved $" << fixed <<
setprecision(2) << savingsC << " by switching to Package C." << endl;
}
}
// package C has a flat rate
} else if (package == 'C' || package == 'c') {
total = priceC;
}
// prints out the total amount due with two decimal places
cout << "The total amount due: $" << fixed << setprecision(2) << total
<< endl;
}
// returns integer 0, the expected data type for main function
return 0;
}
