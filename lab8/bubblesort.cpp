// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name(s): Jaron Patena, JinYong Doh
// Lab 8
// Title: Time Complexity

// bubblesort.cpp

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

// bubble sort
void bub_sort(vector<int> & v)
{
	int i, j;
	int n = v.size();

	for (i = n-1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (v[j] > v[j+1])
			{
				swap(v[j], v[j+1]);
			}
		}
	}
}

// main program
int main()
{
	srand(time(0)); // initialize random number generator
	int s; // initialize input size

	cin >> s;

	vector<int> v(s); // initialize vector with user input size
	
	// randomize numbers
	for(int i=0; i < v.size(); ++i)
	{
		v[i] = rand() % 1000001;
	}

	bub_sort(v); // bubble sort;

	for(int i=0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
}

