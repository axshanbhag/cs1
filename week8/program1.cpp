

// preocessor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
// namespace for shortcuts
using namespace std;
// declare variables
double cost, markup, calculate;
// function to calculate retail price
double calculateRetail (double cost, double markup) {
return cost + (cost * (markup / 100));
}
// main function that returns an integer
int main() {
// prompts user to enter the cost of the item
cout << "Enter the wholesale cost of the item: ";
cin >> cost;
// validates the value of cost by ensuring that it is not 0 or negative
while (cost <= 0) {
cout << "The cost of the item cannot be 0 or negative. Please input a
valid cost: ";
cin >> cost;
}
// prompts user to enter the markup percentage
cout << "Enter the markup percentage: ";
cin >> markup;
// validates the value of markup by ensuring that it is not negative or 0
// asks user to convert decimal to percentage if markup is less than 1
while (markup < 1) {
cout << "The markup value should be in terms of percentage. " << endl;
cout << "Ex) if you previous markup value was 0.1, please convert to
10: ";
cin >> markup;
}
// calls the function to calculate retail price
// stores in a variable
calculate = calculateRetail(cost, markup);
// displays the retail price with 2 decimal places
cout << "The retail price is: $" << fixed << setprecision(2) << calculate <<
endl;
// returns integer 0, the expected data type for main function
return 0;
}
