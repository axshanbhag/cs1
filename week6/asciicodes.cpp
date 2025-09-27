// include directives
#include <iostream>
// namespace for shortcuts
using namespace std;
// main function that returns an integer
int main() {
    // for loop to iterate through ASCII values from 0 to 127
    for (int i = 0; i <= 127; ++i) {
        // every character is converted into a char type and followed by a space
        cout << static_cast<char>(i) << " ";
        // newline after every 16 characters
        if (i % 16 == 0) {
            cout << endl;
        }
    }
    // returns integer 0, the expected data type for main function
    return 0;
}
