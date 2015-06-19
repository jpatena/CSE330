// chapter 7: exercise 2

#include <iostream>
#include <string>

using namespace std;

void reverse(string & str)
{
	int n = str.length();
	for(int i=0; i<5; i++)
	{
		// swap characters
		char t = str[i];
		str[i] = str[n-1-i];
		str[n-1-i] = t;
	}
}

int main()
{
	string test = "hello";
	reverse(test);
	
	cout << test << endl; // appears hello

	// ANSWER: DOES NOT SWAP
}
