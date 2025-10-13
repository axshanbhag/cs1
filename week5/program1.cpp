

// preprocessor directive
#include <iostream>
#include <string>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// declare one string variable
string problem;
cout << "Reboot the computer and try to connect. ";
// prompts the user
cout << "Did that fix the problem? ";
// reads the information from the keyboard and stores it in the variable,
problem
cin >> problem;
// anytime the user enters "yes", the program will end
if (problem == "yes") {
return 0;
// if the user enters "no", the program continues prompting the user
} else if (problem == "no") {
cout << "Reboot the router and try to connect. ";
cout << "Did that fix the problem? ";
cin >> problem;
// for each question, the program checks if the user entered "yes" or
"no"
if (problem == "yes") {
return 0;
} else if (problem == "no") {
cout << "Make sure the cables between the router & modem are
plugged in firmly. ";
cout << "Did that fix the problem? ";
cin >> problem;
if (problem == "yes") {
return 0;
} else if (problem == "no") {
cout << "Move the router to a new location and try to
connect. ";
cout << "Did that fix the problem? ";
cin >> problem;
if (problem == "yes") {
return 0;
} else if (problem == "no") {
cout << "Get a new router.";
}
}
}
}
// returns integer 0, the expected data type for main function
return 0;
}
