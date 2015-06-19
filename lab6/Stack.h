#ifndef STACK_H_
#define STACK_H_

#include <list>

using namespace std;

template <class T, template <class T, class = allocator<T> > class Container = list>
class stack {
public:

	//operations
	bool         empty () { return c.empty(); }
	int	     size () { return c.size(); }
	T & top () { return c.back(); }
	void	     push (T & x) { c.push_back(x); }
	void	     pop () { c.pop_back(); }

private:
	Container<T> c;

};

#endif
