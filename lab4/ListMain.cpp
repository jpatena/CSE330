// testing List.h, Kerstin Voigt, October 2011
// adopted from Kay Zemoudeh
// tests close to all member functions
// of classes List, Link, and ListIterator;

// Realize how the assert statements need to
// succeed if the implementations are correct;

#include <iostream>
#include <cassert>
#include "List.h"

using namespace std;

int main()
{
	List<int> lst;

	assert(lst.size() == 0);
	assert(lst.empty());

	
	cout << "List lst is empty." << endl << endl;

	lst.push_front(44);

	assert(!lst.empty());
	assert(lst.front() == 44);
	assert(lst.back() == 44);

	cout << "44 is the only element in lst." << endl << endl;
	
	
	lst.push_front(33);

	assert(lst.size() == 2);
	assert(lst.front() == 33);
	assert(lst.back() == 44);

	cout << "Now lst has 2 elements: 33,44" << endl << endl;

	cout << "Pushing 22 to front, inserting 11 at beginning" << endl;
	lst.push_front(22);
	ListIterator<int> itr = lst.begin();
	lst.insert(itr, 11);
	itr = lst.begin();
	assert(lst.front() == 11);
	assert(*itr == 11);
	assert(*++itr == 22);
	assert(*++itr == 33);
	assert(*++itr ==  44);

	cout << "List lst contains 11,22,33,44." << endl << endl;

	cout << "Inserting 38 in 3rd place." << endl;
	itr = lst.begin();
	++itr;
	++itr;
	++itr;
	lst.insert(itr, 38);
	ListIterator<int> itr2 = lst.begin();
	assert(*itr2 == 11);
	assert(*++itr2 == 22);
	assert(*++itr2 == 33);
	assert(*++itr2 == 38);
	assert(*++itr2 == 44);

	cout << "List now contains 11,22,33,38,44." << endl << endl;

	cout << "Popping the front of the list." << endl;
	lst.pop_front();
	itr2 = lst.begin();
	assert(*itr2 == 22);
	assert(*++itr2 == 33);
	assert(*++itr2 == 38);
	assert(*++itr2 == 44);
	
	cout << "List now contains 22,33,38,44." << endl << endl;

	cout << "Popping the back of the list and making a copy." << endl;
	lst.pop_back();

	//List<int> cpy(lst); // = lst;
	//cout << "... copy constructor worked" << endl;

	List<int> cpy = lst;

	assert(cpy.size() == 3);

	//List<int>::iterator itr3 = cpy.begin();
	ListIterator<int> itr3 = cpy.begin();
	assert(*itr3 == 22);
	assert(*++itr3 == 33);
	assert(*++itr3 != 44);
	
	cout << "First and second elements of copy are 22 and 33; last element is not 44." << endl;
	cout << "Last is " << *itr3 << endl << endl;
	cout << "Erasing the middle element." << endl;
	
	cpy.erase(--itr3);

	assert(cpy.size() == 2);
	itr3 = cpy.begin();
	assert(*itr3 == 22);
	assert(*++itr3 == 38);
	cout << "Elements are 22 and 38." << endl << endl;
	cout << endl;
	cout << "YOU PASSED A THOROUGH CHECK OF CLASS List. :-)))" << endl;
	
	// for Visua C++ ...
	system("PAUSE");
	return 0;
}

	
