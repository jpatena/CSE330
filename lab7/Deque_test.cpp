// Deque_test.cpp

#include <iostream>
#include <cassert>
#include "Deque.h"
#include <queue>
#include <vector>

using namespace std;

int main()
{
	deque<int> d; // initialize deque d

	d.push_back(10); // 10
	d.push_back(20); // 10 20
	assert(d.front() == 10); // true
	assert(d.back() == 20); // true

	d.push_front(1); // 1 10 20
	d.push_front(2); // 2 1 10 20
	d.push_front(3); // 3 2 1 10 20
	assert(d.front() == 3); // true
	assert(d.back() == 20); // true

	d.pop_back(); // 3 2 1 10
	d.pop_back(); // 3 2 1
	d.pop_back(); // 3 2
	assert(d.front() == 3); // true
	assert(d.back() == 2); // true

	d.push_back(1); // 3 2 1
	d.push_back(0); // 3 2 1 0

	deque<int>::iterator i;
	int counter = 3;
	for (i = d.begin(); i != d.end(); i++)
		assert(*i == counter--);

	for (counter = 0; counter < d.size(); counter++)
		assert(d[counter] == d.size()-counter-1);

	i = d.begin() + 3;
	deque<int>::iterator j(i), k;
	k = j = i - 2;
	assert(*k == 2);

	for (i = d.begin(); not(i == d.end()); ++i) // display deque d elements
		cout << *i << " ";
	cout << endl;

	d.erase(d.begin()+3);
	d.erase(d.begin(), d.begin()+2);
	assert(d.size() == 1);
	assert(d[0] == 1);

	deque<int> c(d);
	c.front() = 3;
	assert(c.back() == 3);

	c.push_front(1);
	c.insert(c.begin(), 0);
	c.insert(c.begin()+2, 2);

	for (i = c.begin(); not(i == c.end()); ++i) // display deque c elements
		cout << *i << " ";
	cout << endl;

	for (counter = 0; counter < c.size(); counter++)
		assert(c[counter] == counter);

	cout << "SUCCESS\n"; // displays if no errors
}

