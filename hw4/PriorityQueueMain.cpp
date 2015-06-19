// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name: Jaron Patena
// Homework 4
// Title: Priority Queue

#include <iostream>
#include <vector>
#include "PriorityQueue.h"

using namespace std;

int main()
{
	PriorityQueue<int> myq;

	// input values from array to vector
	int x[12] = { 12, 15, 100, 24, 19, 60, 112, 123, 18, 29, 78, 4 };
	vector<int> myinputs(x, x+sizeof x / sizeof x[0]);

	// push values from vector into myq;
	for (int i = 0; i < myinputs.size(); i++)
		myq.push(myinputs[i]);

	// print myq contents;
	myq.print_tree();

	// first pop
	myq.pop();
	cout << endl << endl;
	myq.print_tree(); // print myq contents

	// second pop
	myq.pop();
	cout << endl << endl;
	myq.print_tree(); // print myq contents

	// third pop
	myq.pop();
	cout << endl << endl;
	myq.print_tree(); // print myq contents

	// fourth pop
	myq.pop();
	cout << endl << endl;
	myq.print_tree(); // print myq contents

	cout << endl;

	return 0;
}
