// pre-processor directives
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <random>
// namespace for shortcuts
using namespace std;
string computerChoice() {
	random_device myEngine;
	uniform_int_distribution<int> myDistribution(1, 3);
	int number = myDistribution(myEngine);
	if (number == 1) {
		return "rock";
	} else if (number == 2) {
		return "paper";
	} else {
		return "scissors";
	}
}
string userChoice() {
	string userInput;
	cout << "Enter rock, paper, or scissors: ";
	cin >> userInput;
	while (userInput != "rock" && userInput != "paper" && userInput != "scissors") {
		cout << "Invalid input. Please enter rock, paper, or scissors: ";
		cin >> userInput;
	}
	return userInput;
}
string determineWinner(string userInput, string computerInput) {
	if (userInput == computerInput) {
		return "It's a tie!";
	} else if ((userInput == "rock" && computerInput == "scissors") ||
	           (userInput == "scissors" && computerInput == "paper") ||
	           (userInput == "paper" && computerInput == "rock")) {
		return "You win!";
	} else {
		return "Computer wins!";
	}
}
string play() {
	string computerInput = computerChoice();
	string userInput = userChoice();
	cout << "Computer chose: " << computerInput << endl;
	string result = determineWinner(userInput, computerInput);
	return result;
}
// main function that returns an integer
int main() {
	string result = play();
	while (result == "It's a tie!") {
		cout << "It's a tie! Please play again." << endl;
		result = play();
	}
	cout << result << endl;
	return 0;
}
