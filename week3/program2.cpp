

// preocessor directives
#include <iostream>
#include <iomanip>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// declares the constants for yen per dollar and euros per dollar
// updated constant values found on Google Finance as of today
const double YEN_PER_DOLLAR = 147.07;
const double EUROS_PER_DOLLAR = 0.85;
// declares the variables for dollars, yen, and euros
double dollars, yen, euros;
// prompts the user to a number of U.S. dollars
cout << "Enter the amount in U.S. dollars: ";
// reads the information from the keyboard and stores it in the variable,
dollars
cin >> dollars;
// converts the amount in U.S. dollars to yen and euros, and stores them in
the variables, yen and euros
yen = dollars * YEN_PER_DOLLAR;
euros = dollars * EUROS_PER_DOLLAR;
// formatted in fixed-point notation, with two decinmal places of precision
(looked ahead in the lecture slides)
cout << setprecision(2) << fixed;
// console output displaying the amount in U.S. dollars, yen, and euros
cout << dollars << " U.S. dollars converts into " << yen << " Japanese yen
and " << euros << " euros." << endl;
// returns integer 0, the expected data type for main function
return 0;
}
