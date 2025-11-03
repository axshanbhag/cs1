
// pre-processor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <random>
#include <cmath>
// namespace for shortcuts
using namespace std;
// function to calculate average food eaten
double average(int array[3][7]) {
int total = 0;
// iterate through each row and column to sum up all values
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 7; j++)
total += array[i][j];
}
// divide the 3 monkeys by 7 days to get the total divided by 21
double average = static_cast<double>(total)/21;
return average;
}
// function to calculate least food eaten
int least(int array[3][7]) {
// temp variable to hold least value, initialized to first element
int least = array[0][0];
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 7; j++) {
// only if the current element indexed is less than least, update least
if (array[i][j] < least)
least = array[i][j];
}
}
return least;
}
// function to calculate greatest food eaten
int greatest(int array[3][7]) {
// temp variable to hold greatest value, initialized to first element
int greatest = array[0][0];
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 7; j++) {
// only if the current element indexed is greater than greatest, update
greatest
if (array[i][j] > greatest)
greatest = array[i][j];
}
}
return greatest;
}
// main function that returns an integer
int main() {
// initialize 2D array for 3 monkeys and 7 days
int lbsfood[3][7];
// input food eaten by each monkey for each day by iterating through the erray
for (int i = 0; i < 3; i++) {
// prompt for each monkey
cout << "Enter pounds of food eaten by monkey " << (i+1) << " for 7 days:
\n";
for (int j = 0; j < 7; j++) {
// prompt for each day
cout << "Day " << (j+1) << ": ";
cin >> lbsfood[i][j];
// input validation for positive values
while (lbsfood[i][j] < 0) {
cout << "Please enter a positive value: ";
cin >> lbsfood[i][j];
}
}
}
// report with respective functions
cout << "Average amount of food eaten per day by the whole family of monkeys: "
<< average(lbsfood) << " pounds" << endl;
cout << "The least amount of food eaten during the week by any one monkey: " <<
least(lbsfood) << " pounds" << endl;
cout << "The greatest amount of food eaten during the week by any one monkey: "
<< greatest(lbsfood) << " pounds" << endl;
return 0;
}
