

// preprocessor directive
#include <iostream>
// namespace
using namespace std;
// main function that returns an integer
int main() {
// console output of the sizes of different data types in bytes
cout << "A char is stored in " << sizeof(char) << " byte."<< endl;
cout << "A int is stored in " << sizeof(int) << " bytes."<< endl;
cout << "A float is stored in " << sizeof(float) << " bytes."<< endl;
cout << "A double is stored in " << sizeof(double) << " bytes."<< endl;
// returns integer 0, the expected data type for main function
return 0;
}
