
// pre-processor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <random>
#include <cmath>
// namespace for shortcuts
using namespace std;
// function to calculate total rainfall
double totalRainfall(double arr[12]) {
// initialization and declaration of total variable
double total = 0.0;
// for loop that iterates through the array and sums up the rainfall amounts
for (int i=0; i<12; i++) {
total += arr[i];
}
return total;
}
// function to calculate average rainfall
double averageRainfall(double arr[12]) {
// calls totalRainfall function to get the total rainfall
double total = totalRainfall(arr);
// returns the average by dividing total by 12 months
return total / 12.0;
}
// function to find the highest rain amount in the array
int highestRain(double arr[12]) {
double largest = arr[0];
// for loop that iterates through the array and compares the current largest number with each element
for (int i=1; i<12; i++) {
if (arr[i] > largest) {
largest = arr[i];
}
}
return largest;
}
// function to find the lowest rain amount in an array
int lowestRain(double arr[12]) {
double smallest = arr[0];
// for loop that iterates through the array and compares the current smallest number with each element
for (int i=1; i<12; i++) {
if (arr[i] < smallest) {
smallest = arr[i];
}
}
return smallest;
}
// main function that returns an integer
int main() {
// intialize rainfall array to hold 12 elements
double arr1[12];
// for loop that adds a value for each month in the array
for (int i=0; i<12; i++) {
cout << "Ener total rainfall for Month " << (i+1) << ": ";
cin >> arr1[i];
// while loop to validate input for non-negative rainfall amounts
while (arr1[i] < 0) {
cout << "Rainfall cannot be negative. Please enter a valid amount for
Month " << (i+1) << ": ";
cin >> arr1[i];
}
}
// output results of total rainfall, average rainfall, highest and lowest rainfall with their respective functions
cout << "The total rainfall for the year is: " << totalRainfall(arr1) << "
inches" << endl;
cout << "The average monthly rainfall is: " << averageRainfall(arr1) << "
inches" << endl;
cout << "The highest monthly rainfall is: " << highestRain(arr1) << " inches"
<< endl;
cout << "The lowest monthly rainfall is: " << lowestRain(arr1) << " inches" <<
endl;
return 0;
}
