// chp 7: exercise 8

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// display number of words
int numwrds(vector<string> words)
{
	return words.size()-1;
}

// display average word length
double avgwrdlngth(vector<string> words)
{
	double sum = 0.0;
	double avg;

	for(int i=0; i<words.size()-1; ++i)
	{
		sum = sum + words[i].length();
	}
	avg = sum / (words.size()-1);
	
	return avg;

}

// main program
int main()
{
	vector<string> v;
	string input;

	while(cin.good())
	{
		cin >> input;
		v.push_back(input);
	}

	cout << "number of words: " << numwrds(v) << endl;
	cout << "average word length: " << avgwrdlngth(v) << endl;


}
