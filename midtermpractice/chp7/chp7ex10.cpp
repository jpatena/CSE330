// chapter 7: exercise 10

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word = "abc";
	string result;
	int mult = 3;

	for(int i=0; i<mult; ++i)
	{
		result = result + word;
	}

	cout << result << endl; 
}
