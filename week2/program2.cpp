

// preprocessor directive
#include <iostream>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// initializes variables for meal cost, tax, tip, and total bill
// meal cost is $88.67
double meal_cost = 88.67;
// tax is 6.75% of meal cost
double tax = 0.0675 * meal_cost;
// tip is 20% of the sum of meal cost and tax
double tip = (meal_cost + tax) * 0.20;
// total bill is the sum of meal cost, tax, and tip
double bill = meal_cost + tax + tip;
// prints the variables to the console, followed by new lines
cout << "Meal Charge: $" << meal_cost << endl;
cout << "Tax: $" << tax << endl;
cout << "Tip: $" << tip << endl;
cout << "Total Bill: $" << bill << endl;
// returns integer 0, the expected data type for main function
return 0;
}
