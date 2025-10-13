

// preprocessor directive
#include <iostream>
#include <string>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// declare three string variables
string vegetarian, vegan, glutenFree;
// prompts the user
cout << "Is anyone in your party a vegetarian? ";
// reads the information from the keyboard and stores it in the variable,
problem
cin >> vegetarian;
cout << "Is anyone in your party a vegan? ";
cin >> vegan;
cout << "Is anyone in your party gluten-free? ";
cin >> glutenFree;
// checks for each restraunt based on the groups' dietary restrictions
if (vegetarian == "yes" && vegan == "yes" && glutenFree == "yes") {
cout << "Here are your restaurant choices: \n";
cout << "Corner Cafe\n";
cout << "The Chef's Kitchen\n";
} else if (vegetarian == "yes" && vegan == "yes" && glutenFree == "no") {
cout << "Here are your restaurant choices: \n";
cout << "Corner Cafe\n";
cout << "The Chef's Kitchen\n";
} else if (vegetarian == "yes" && vegan == "no" && glutenFree == "yes") {
cout << "Here are your restaurant choices: \n";
cout << "Main Street Pizza Company\n";
cout << "Corner Cafe\n";
cout << "The Chef's Kitchen\n";
} else if (vegetarian == "yes" && vegan == "no" && glutenFree == "no") {
cout << "Here are your restaurant choices: \n";
cout << "Main Street Pizza Company\n";
cout << "Corner Cafe\n";
cout << "Mama's Fine Italian\n";
cout << "The Chef's Kitchen\n";
} else if (vegetarian == "no" && vegan == "yes" && glutenFree == "yes") {
cout << "Here are your restaurant choices: \n";
cout << "Corner Cafe\n";
cout << "The Chef's Kitchen\n";
} else if (vegetarian == "no" && vegan == "yes" && glutenFree == "no") {
cout << "Here are your restaurant choices: \n";
cout << "Corner Cafe\n";
cout << "The Chef's Kitchen\n";
} else if (vegetarian == "no" && vegan == "no" && glutenFree == "yes") {
cout << "Here are your restaurant choices: \n";
cout << "Main Street Pizza Company\n";
cout << "Corner Cafe\n";
cout << "The Chef's Kitchen\n";
} else if (vegetarian == "no" && vegan == "no" && glutenFree == "no") {
cout << "Here are your restaurant choices: \n";
cout << "Joe's Gourmet Burgers\n";
}
// returns integer 0, the expected data type for main function
return 0;
}
