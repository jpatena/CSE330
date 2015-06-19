// chap 12 - exercise 10

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

	// insert following names
	myset.insert("Abel");
	myset.insert("Andrew");
	myset.insert("Antonia");

	// display set
	cout << endl << endl;
	for(it=myset.begin(); it!=myset.end(); ++it)
		cout << *it << " ";	

	cout << endl;

}

