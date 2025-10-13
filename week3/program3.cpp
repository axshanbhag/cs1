

// preocessor directives
#include <iostream>
// used to declare string variables
#include <string>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// declares the string variables for name, city, college, profession, animal,
and petname
string name, city, college, profession, animal, petname;
// declares the integer variable for age
int age;
// prompts the user to enter their name, age, city, college, profession, type
of animal, and pet name
// reads the information from the keyboard and stores them in their
respective variables
cout << "Enter your name: ";
cin >> name;
cout << "Enter your age: ";
cin >> age;
cout << "Enter the name of a city: ";
cin >> city;
cout << "Enter the name of a college: ";
cin >> college;
cout << "Enter a profession: ";
cin >> profession;
cout << "Enter a type of animal: ";
cin >> animal;
cout << "Enter a pet name: ";
cin >> petname;
// console output displaying the madlibs story with the user's input in their
appropriate locations
// endl is used to indicate a new line after each sentence in the story
cout << "There once was a person named " << name << " who lived in " << city
<< "." << endl;
cout << "At the age of " << age << ", " << name << " went to college at " <<
college << "." << endl;
cout << name << " graduated and went to work as a " << profession << "." <<
endl;
cout << "Then, " << name << " adopted a(n) " << animal << " named " <<
petname << "." << endl;
cout << "They both lived happily ever after!" << endl;
// returns integer 0, the expected data type for main function
return 0;
}
