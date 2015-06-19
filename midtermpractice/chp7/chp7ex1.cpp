// chapter 7: exercise 1

#include <iostream>
#include <cctype> // ctype.h
#include <cassert>
using namespace std;

int main()
{
	// islower
	char letter1 = 'a';
	char letter2 = 'A';
	assert(islower(letter1) != false); // true
	assert(islower(letter2) == false);

	// isdigit
	char number1 = '2';
	char number2 = 'b';
	assert(isdigit(number1) != false); // true
	assert(isdigit(number2) == false);

	// isalphabetic
	char letter3 = 'c';
	char letter4 = 'D';
	char letter5 = '3';
	assert(isalpha(letter3) != false); // true
	assert(isalpha(letter4) != false); // true
	assert(isalpha(letter5) == false);

	// isalphanumeric
	assert(isalnum(letter1) != false); // true
	assert(isalnum(letter2) != false); // true
	assert(isalnum(letter3) != false); // true
	assert(isalnum(letter4) != false); // true
	assert(isalnum(letter5) != false); // true
	assert(isalnum(number1) != false); // true
	assert(isalnum(number2) != false); // true
	char symbol1 = '*';
	char symbol2 = '=';
	assert(isalnum(symbol1) == false);
	assert(isalnum(symbol2) == false);

	cout << "SUCCESS" << endl; // displays if no errors
}
