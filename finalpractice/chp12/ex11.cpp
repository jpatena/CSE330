// chap 12 - exercise 11

#include <iostream>
#include <set>

using namespace std;

int main()
{
	string tmp[] = {"Alex", "Abner", "Angela", "Abigail", 
		"Adela", "Alice", "Audrey", "Adam", "Agnes", "Allen", "Arthur"}; 
	set<string> myset(tmp, tmp+11);
	set<string>::iterator it;	

	// display set
	for(it=myset.begin(); it!=myset.end(); ++it)
		cout << *it << " ";

	// erase following names
	myset.erase("Adela");
	myset.erase("Angela");
	myset.erase("Alex");

	// display set
	cout << endl << endl;
	for(it=myset.begin(); it!=myset.end(); ++it)
		cout << *it << " ";	

	cout << endl;

}

