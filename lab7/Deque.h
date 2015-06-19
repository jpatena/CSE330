// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name(s): Jaron Patena, JinYong Doh
// Lab 7
// Title: Deque.h

#ifndef DEQUE_H
#define DEQUE_H

// Deque.h - an implementation of double-ended queue

#include <vector>

using namespace std;

template <class T> class DequeIterator;

template <class T>
class Deque {
public:
	typedef DequeIterator<T> iterator;
	
	Deque(): vecOne(), vecTwo() { }
	Deque(const unsigned int size, const T& initial): vecOne(size/2, initial), vecTwo(size-(size/2), initial) { }
	Deque(const Deque<T> & d): vecOne(d.vecOne), vecTwo(d.vecTwo) { }
        ~Deque() { } // destructors for vecOne and vecTwo are automatically called
                     // never call a destructor explicitly
        Deque & operator=(const Deque<T> & d);

	T & operator[](unsigned int);
	T & front();
	T & back();
	bool empty();
	iterator begin();
	iterator end();
	void erase(const iterator &);
	void erase(const iterator &, const iterator &);
	void insert(const iterator &, const T &);
	int size();
	void push_front(const T & value);
	void push_back(const T & value);
	void pop_front();
	void pop_back();
protected:
	vector<T> vecOne;
	vector<T> vecTwo;
};

// Your code goes here ...

template <class T>
class DequeIterator {
	friend class Deque<T>;
	typedef DequeIterator<T> iterator;
public:
	DequeIterator(): theDeque(0), index(0) { }
	DequeIterator(Deque<T> * d, int i): theDeque(d), index(i) { }
	DequeIterator(const iterator & d): theDeque(d.theDeque), index(d.index) { }

	T & operator*();
	iterator & operator++();
	iterator operator++(int);
	iterator & operator--();
	iterator operator--(int);
	bool operator==(const iterator & r);
	bool operator!=(const iterator & r);
	bool operator<(const iterator & r);
	T & operator[](unsigned int i);
	iterator operator=(const iterator & r);
	iterator operator+(int i);
	iterator operator-(int i);
protected:
	Deque<T> * theDeque;
	int index;
};
#endif
