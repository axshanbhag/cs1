// preocessor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
// namespace for shortcuts
using namespace std;
// main function that returns an integer
int main() {
// declaration of variables
string name, description;
ofstream outfile;
// prompts the user to enter their name
cout << "Enter your name: ";
// reads value of keyboard and stores the user input in variable name
getline(cin, name);
// prompts the user to enter a description of themselves
cout << "Describe yourself: ";
// reads value of keyboard and stores the user input in variable description
getline(cin, description);
// creates and opens a new file called index.html
outfile.open("index.html");
// html code for index.html file
outfile << "<html>\n";
outfile << "<head>\n";
outfile << "</head>\n";
outfile << "<body>\n";
outfile << " <center>\n";
// passes in the user input name variable to be displayed in h1 header tags
outfile << " <h1>" << name << "</h1>\n";
outfile << " </center>\n";
// passes in the user input description variable to be displayed in hr header tags
outfile << " <hr>\n";
outfile << " " << description << "\n";
outfile << " <hr>\n";
outfile << "</body>\n";
outfile << "</html>\n";
// returns integer 0, the expected data type for main function
return 0;
}
