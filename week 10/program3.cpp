
// include directives
#include <iostream>
#include <iomanip>
#include <string>
// namespace for shortcuts
using namespace std;
// function to find the highest rain amount in the array
string highestSold(string arr[5], int arr2[5]) {
double largest = arr2[0];
int largestIndex = 0;
// for loop that iterates through the array and compares the current largest number with each element
for (int i=1; i<5; i++) {
if (arr2[i] > largest) {
largest = arr2[i];
largestIndex = i;
}
}
return arr[largestIndex];
}
// function to find the lowest rain amount in an array
string lowestSold(string arr[5], int arr2[5]) {
double lowest = arr2[0];
int smallestIndex = 0;
// for loop that iterates through the array and compares the current largest number with each element
for (int i=1; i<5; i++) {
if (arr2[i] < lowest) {
lowest = arr2[i];
smallestIndex = i;
}
}
return arr[smallestIndex];
}
// function to display sales report
void salesReport(string arr[5], int arr2[5]) {
cout << "Sales Report: " << endl;
// for loop to display each salsa type with its respective sales amount
for (int i = 0; i < 5; i++) {
cout << arr[i] << ": " << arr2[i] << " jars sold" << endl;
}
}
int main() {
// initialize and declaration of the names and sales arrays
string salsaNames[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
int salsaSold[5];
// counter variable to track total sales
int total = 0;
// for loop to get user input for each salsa type
for (int i=0; i<5; i++) {
cout << "Enter the number of jars sold for " << salsaNames[i] << ": ";
cin >> salsaSold[i];
// while loop to validate input for non-negative sales amounts
while (salsaSold[i] < 0) {
cout << "Sales cannot be negative. Please enter a valid amount for " <<
salsaNames[i] << ": ";
cin >> salsaSold[i];
}
// only adds to total if input is valid
total += salsaSold[i];
}
// output results of highest and lowest sales, total sales, and the sales report with their respective functions and variables
salesReport(salsaNames, salsaSold);
cout << "The total number of jars sold is: " << total << endl;
cout << "The salsa with the highest sales is: " << highestSold(salsaNames,
salsaSold) << endl;
cout << "The salsa with the lowest sales is: " << lowestSold(salsaNames,
salsaSold) << endl;
// returns integer 0, the expected data type for main function
return 0;
}
