// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name(s): Jaron Patena
// Homework 2
// Title: Mergesort

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// internal merge source routine
template <class Itr>
void m_sort(Itr start, unsigned low, unsigned high) {
	if (low + 1 < high) {
		unsigned int center = (high + low) / 2;
		m_sort (start, low, center);
		m_sort (start, center, high);
		inplace_merge (start + low, start + center, start + high);
		}
}

// sort vector into ascending order using merge sort algorithm
template <class T> 
void mergeSort(vector<T> & s) {
	m_sort(s.begin(), 0, s.size());
}

// main program
int main() {
	vector<int> v;
	int input;

	// input numbers to vector and display
	cout << "unsorted:" << endl;
	while(cin.good()) {
		cin >> input;
		cout << input << " ";
		v.push_back(input);
	}

	mergeSort(v); // plug in vector to mergeSort
	vector<int>::iterator itr = v.begin();

	// display numbers after sorting
	cout << endl;
	cout << "sorted:" << endl;
	while (itr != v.end()) {
		cout << *itr << " ";
		itr++;
	}
	cout << endl;

	return 0;
}

