// test.cpp

#include <iostream>
#include <cassert>
#include "Deque.h"
#include <vector>

using namespace std;

int main()
{
	deque<int> d; // initialize deque d

	d.push_back(10); // 10
	d.push_back(20); // 10 20
	d.push_front(1); // 1 10 20
	d.push_front(2); // 2 1 10 20
	d.push_front(3); // 3 2 1 10 20

	deque<int> c; // initialize deque c
	c = d; // copy deque d to c

	deque<int>::iterator i; // initialize iterator i
	for (i = c.begin(); i != c.end(); ++i) // display deque elements
		cout << *i << " ";
	cout << endl;
}
