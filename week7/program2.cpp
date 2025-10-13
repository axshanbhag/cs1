

// include directives
#include <iostream>
#include <iomanip>
#include <fstream>
// namespace for shortcuts
using namespace std;
// main function that returns an integer
int main() {
// declaration and initializationof variables
ifstream infile;
double num, total = 0, average = 0, counter = 0;
// open file Random.txt
infile.open("Random.txt");
// while there is data in the files, continue extracting it into the variable
num
while (infile >> num) {
// increment counter and add num to total
counter++;
total += num;
}
// calculate average
average = total / counter;
// display number of numbers, total, and average with 2 decimal places
cout << "Number of numbers: " << counter << endl;
cout << "Total: " << total << endl;
cout << "Average: " << fixed << setprecision(2) << average << endl;
// close the file
infile.close();
// returns integer 0, the expected data type for main function
return 0;
}
