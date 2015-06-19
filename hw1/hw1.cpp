// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name(s): Jaron Patena
// Homework 1
// Title: Homework 1

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// calculates average value
float average(vector<float> values) {
	float sum = 0;

	for(int i=0; i<values.size(); ++i) {
		sum += values[i];
	}

	float ave = sum/(values.size());
	return ave; // return average value
}

// calculates variance value
float variance(vector<float> values) {
	float diff = 0;

	for(int i=0; i<values.size(); ++i) {
		diff += pow(values[i]-average(values),2);
		}

	float var = diff/(values.size());
	return var; // return variance value
}

// main program
int main()
{
	bool error = false;

	vector<float> v(100); // initializes vector float with 100 slots
	int count = -1; // cin grabs end of file too (white space), counts as input.
	int n; // input

	int i = 0;

	// true while there is input
	while(cin.good()) {
		cin >> n;
		count++; // counts input

		// checks if n>100, returns error
		if(count > 100) {
			error = true;
			break; // exits loop
		}

		v[i] = n; // replaces vector slot with input value
		++i;
	}

	v.resize(count); // resizes vector from 100 to actual number of input elements

	// checks if n=0, n=1, returns error
	if(v.size()<=1) error = true;
	
	// displays error	
	if(error==true) cout << "Error! # of elements must be greater than 2 and less than 100." << endl;
	
	// if no errors
	else {
		// display results of calculations
		cout << "number of elements:" << v.size() << endl;
		cout << "average:" << average(v) << endl;
		cout << "variance:" << variance(v) << endl;
	}

	return 0;
}
