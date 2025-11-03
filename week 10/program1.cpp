

// pre-processor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <random>
// namespace for shortcuts
using namespace std;
// function to find the largest number in an array
int largestNum(int arr[10]) {
int largest = arr[0];
// for loop that iterates through the array and compares the current largest number with each element
for (int i=1; i<10; i++) {
if (arr[i] > largest) {
largest = arr[i];
}
}
return largest;
}
// function to find the smallest number in an array
int smallestNum(int arr[10]) {
int smallest = arr[0];
// for loop that iterates through the array and compares the current smallest number with each element
for (int i=1; i<10; i++) {
if (arr[i] < smallest) {
smallest = arr[i];
}
}
return smallest;
}
// main function that returns an integer
int main() {
//initialize integer array to hold 10 elements
int arr1[10];
for (int i=0; i<10; i++) {
cout << "Enter integer " << (i+1) << ": ";
cin >> arr1[i];
}
// output results of largest and smallest number with their respective functions
cout << "The largest number is: " << largestNum(arr1) << endl;
cout << "The smallest number is: " << smallestNum(arr1) << endl;
// returns integer 0, the expected data type for main function
return 0;
}
