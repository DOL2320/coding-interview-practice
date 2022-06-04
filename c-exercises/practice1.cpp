#include <iostream>

using namespace std;

int main() {

	// given an input string from the command line,
        // rotate the characters three spaces to the right.
        // for example, the character string "123456"
        // would become "456123".
        // you can expect the input length to be a multiple of three.
        // if the input was not a multiple of three, whatever the
        // remainder would be after the first multiples of three
        // would be rotated to the front of the string.
        // for example, the character string "12345"
        // would become "45123".
	
	string input; // Declare a string variable
	cout << "Enter a string: "; // Ask user for input
	cin >> input; // Store user input into a variable
	
	// Store the first 3 characters in a variable
	string begin = input.substr(0,3);
	
	// Store the end of the string in a variable
	string end = input.substr(3, input.length() - 1);
	
	// Replace the beginning of the string with the end of the string
	input.replace(0, end.length() - 1, end);
	
	// Replace the end of the string with the beginning of the string
	input.replace(end.length(), input.length() - 1, begin);
	
	cout << input;
}
