// pre-processor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <random>
#include <cmath>
// namespace for shortcuts
using namespace std;
int numRooms() {
    int rooms;
    cout << "Enter number of rooms: ";
    cin >> rooms;
    while (rooms < 1) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> rooms;
    }
    return rooms;
}
double ppGallon() {
    double gallon;
    cout << "Enter price of paint per gallon: ";
    cin >> gallon;
    while (gallon < 10.00) {
        cout << "Invalid input. Please enter a price of at least $10.00: ";
        cin >> gallon;
    }
    return gallon;
}
double wallSpace() {
    double space;
    cout << "Enter the square feet of wall space in each room: ";
    cin >> space;
    while (space < 0) {
        cout << "Invalid input. Please enter a non-negative value: ";
        cin >> space;
    }
    return space;
}
int sqftpw(double space, int rooms) {
    return ceil((space * rooms) / 110);
}
// main function that returns an integer
int main() {
    double space = wallSpace();
    int rooms = numRooms();
    double gallon = ppGallon();
    double every110 = sqftpw(space, rooms);
    double paint = every110;
    cout << "Gallons of paint required: " << paint << endl;
    double labor = every110 * 8;
    cout << "Hours of labor required: " << labor << endl;
    double costPaint = paint * gallon;
    cout << "Cost of paint: $" << fixed << setprecision(2) << costPaint << endl;
    double costLabor = labor * 25.00;
    cout << "Cost of labor: $" << fixed << setprecision(2) << costLabor << endl;
    double total = costPaint + costLabor;
    cout << "Total cost of the paint job: $" << fixed << setprecision(2) << total << endl;
	return 0;
}
