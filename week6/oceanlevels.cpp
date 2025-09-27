// include directives
#include <iostream>
#include <iomanip>

// namespace for shortcuts
using namespace std;

int main() { 
    // initialization of variables
    int start_year;
    double start_ocean_level;

    // prompts the user to enter a year
    cout << "Enter a year: ";
    // reads value of keyboard and stores the user input in variable year
    cin >> start_year;
    // prompts the user to enter the current ocean level
    cout << "Enter the current ocean level: ";
    // reads value of keyboard and stores the user input in variable current
    cin >> start_ocean_level;

    // initialization of variables for loop
    double ocean_level = start_ocean_level;
    double ocean_level_increase_per_year = 1.5;
    int end_year = start_year + 25;

    // format header of output table
    cout << "[Year]" << setw(15) << "[Ocean Level]" << endl;
    cout << "------------------------" << endl;
    // for loop to iterate from the start_year to end_year, increasing ocean level by 1.5 each year
    for (int year = start_year; year <= end_year; year++, ocean_level += ocean_level_increase_per_year) {
        cout << year << setw(10) << ocean_level << endl;
    }
    // returns integer 0, the expected data type for main function
    return 0;
}
