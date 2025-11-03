

// pre-processor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <random>
// namespace for shortcuts
using namespace std;
// function to print numbers greater than n from an array that doesn't return anything
void greater_than_n(int arr[], int size, int n) {
// for loop that iterates through the array and prints numbers greater than n
for (int i = 0; i < size; i++) {
if (arr[i] > n) {
cout << arr[i] << " ";
}
}
}
// main function that returns an integer
int main() {
// sample array and n as an example
int array[] = {1,2,3,4,5,6,7,8,9,10};
int size = sizeof(array) / sizeof(array[0]);
int n = 4;
// header print
cout << "Numbers greater than " << n << ": ";
// call function by passing in parameters initialized above
greater_than_n(array, size, n);
// returns integer 0, the expected data type for main function
return 0;
}
