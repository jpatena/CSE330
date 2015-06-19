#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
	typedef map<string, int> mymap; // initialize map
	
	mymap word;
	mymap::iterator it; // initialize iterator 

	int counter = 0; // counts frequency of word
	string input;


	while(cin.good())
	{
		cin >> input;
		word[input]; // insert word to map
		
	}

	for(it=word.begin(); it!=word.end(); ++it)
	{
		cout << "key: " << it->first << " ";
		cout << "value: " << it->second << endl;
	}

}
