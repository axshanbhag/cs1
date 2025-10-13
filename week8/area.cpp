

// Chapter 6, Programming Challenge 2
#include <iostream>
using namespace std;
// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);
int main()
{
double length, // The rectangle's length
width, // The rectangle's width
area; // The rectangle's area
// Get the rectangle's length.
length = getLength();
// Get the rectangle's width.
width = getWidth();
// Get the rectangle's area.
area = getArea(length, width);
// Display the rectangle's data.
displayData(length, width, area);
return 0;
}

double getLength() {
double length;
cout << "Please enter the length of the rectangle: ";
cin >> length;
return length;
}
double getWidth() {
double width;
cout << "Please enter the width of the rectangle: ";
cin >> width;
return width;
}
double getArea(double length, double width) {
double area;
area = length * width;
return area;
}
void displayData(double length, double width, double area) {
cout << "Length: " << length << endl;
cout << "Width: " << width << endl;
cout << "Area: " << area << endl;
}
