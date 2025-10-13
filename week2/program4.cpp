

// preprocessor directive
#include <iostream>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// pay amount is initialized as 2200.00
double payAmount = 2200.0;
// the number of pay periods in a year is 26
const int payPeriods = 26;
// employee’s total annual pay
double annualPay = payAmount * payPeriods;
// prints the variable of the annual pay to the console, followed by a new
line
cout << "Total Annual Pay: $" << annualPay << endl;
// returns integer 0, the expected data type for main function
return 0;
}
