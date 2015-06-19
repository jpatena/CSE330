// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name(s): Jaron Patena, JinYong Doh
// Lab 4
// Title: Class List

#include "List.h"
#include <iostream>

using namespace std;

// Sieve of Eratosthenes
void sieve(List<int> & a) {

	// first initialize all cells
	for (int i=2; i<100; i++) a.push_back(i);

	// set iterator to beginning of list
   ListIterator<int> ait = a.begin();

	// search for prime numbers
	while (ait != a.end()) {
		for (int i = 2; i < *ait; ++i) {

			// deletes *iterator if not prime
      	if(*ait % i == 0) a.erase(ait);
   	}
		++ait;
	}
}

// Main program
int main() {
	List<int> lst; // normal list
	List<int> *vals; // pointer to list
	vals = &lst;

	sieve(*vals); // input list into sieve function

	// set iterator to beginning of list
	ListIterator<int> itr = lst.begin();

	// print numbers
	while(itr != lst.end()) {
		cout << *itr << " ";
		++itr;
	}
	cout << endl;
	return 0;
}
