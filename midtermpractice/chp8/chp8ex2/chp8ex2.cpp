// chapter 8: exercise 2
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string join(vector<string>& values, string & seperator)
{
	string longstring;
	for(int i=0; i < values.size()-1; ++i)
	{
		longstring = longstring + values[i] + seperator;
	}

	return longstring;
}

int main()
{
	vector<string> values;
	string input;
	string seperator = "*";

	while(cin.good())
	{
		cin >> input;
		values.push_back(input);
	}


	cout << join(values, seperator);
}
