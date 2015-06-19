// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name: Jaron Patena
// Homework 3
// Title: Treesort

// PROBLEM 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <set>

using namespace std;

// treesort algorithm
template <class T>
void treesort(vector<T>& vec) {
	// initialize set and iterator
	// transfer vector elements to set
	// once in set, sorts and rids of duplicate elements
	set<T> myset (vec.begin(), vec.end());
	set<int>::iterator it;

	vec.clear(); // clears vector

	// push back set elements to vector
	for(it = myset.begin(); it!=myset.end() ; ++it) {
		vec.push_back(*it);
	}
}

// main program
int main() {
	// initializes random number generator & vector
	srand(time(0));
	vector<int> myvec;

	// randomize numbers [0-50] & print
	cout << "unsorted: " << endl;
	for(int i=0; i < 10; ++i) {
		myvec.push_back(rand() % 51);
		cout << myvec[i] << " ";
	}
	cout << endl;

	// uses treesort algorithm on vector
	treesort(myvec);
	
	// print elements after treesort
	cout << "sorted: " << endl;
	for(int i=0; i < myvec.size(); ++i) {
		cout << myvec[i] << " ";
	}
	cout << endl;
}
