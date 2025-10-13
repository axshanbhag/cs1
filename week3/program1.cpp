

// preprocessor directive
#include <iostream>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// declares the variables for miles, gallons, and miles per gallon
double miles, gallons, mpg;
// prompts the user to enter the number of gallons the car can hold
cout << "Enter the number of gallons of gas the car can hold: ";
// reads the information from the keyboard and stores it in the variable,
gallons
cin >> gallons;
// prompts the user to enter the number of miles the car can be driven on a
full tank
cout << "Enter the number of miles it can be driven on a full tank: ";
// reads the information from the keyboard and stores it in the variable,
miles
cin >> miles;
// calculates the number of miles per gallon of gasoline and stores it in the
variable, mpg
mpg = miles / gallons;
// displays the number of miles that may be driven per gallon of gasoline
cout << "The number of miles that may be driven per gallon of gasoline is "
<< mpg << endl;
// returns integer 0, the expected data type for main function
return 0;
}
