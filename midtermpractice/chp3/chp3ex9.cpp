// chap 3: exercise 9
#include <iostream>

using namespace std;

char tolower(char input)
{
	switch (input) { 
	// checks if input is Uppercase then returns lowercase
		case 'A': return 'a';
		case 'B': return 'b';
		case 'C': return 'c';
		case 'D': return 'd';
		case 'E': return 'e';
		case 'F': return 'f';
		case 'G': return 'g';
		case 'H': return 'h';
		case 'I': return 'i';
		case 'J': return 'j';
		case 'K': return 'k';
		case 'L': return 'l';
		case 'M': return 'm';
		case 'N': return 'n';
		case 'O': return 'o';
		case 'P': return 'p';
		case 'Q': return 'q';
		case 'R': return 'r';
		case 'S': return 's';
		case 'T': return 't';
		case 'U': return 'u';
		case 'V': return 'v';
		case 'W': return 'q';
		case 'X': return 'x';
		case 'Y': return 'y';
		case 'Z': return 'z';
	}
	return input;
	// if not Uppercase then returns unchanged
}


int main()
{
	char c;
	cout << "please enter character: ";
   cin >> c;
	cout << "lowercase: " << tolower(c) << endl;	
}
