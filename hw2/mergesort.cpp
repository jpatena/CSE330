#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template <class Itr>
void m_sort(Itr start, unsigned low, unsigned high)
// internal merge source routine
{
	if (low + 1 < high) {
		unsigned int center = (high + low) / 2;
		m_sort (start, low, center);
		m_sort (start, center, high);
		inplace_merge (start + low, start + center, start + high);
		}
}

template <class T> 
void mergeSort(vector<T> & s)
// sort vector into ascending order using merge sort algorithm
{
	m_sort(s.begin(), 0, s.size());
}

int main()
// main program
{
	vector<int> v(100);

	cout << "unarranged:" << "/n";
	for (int i = 0; i < 100; i++)
	{
		v[i] = rand() % 101;
		cout << v[i] << " ";
	}

	mergeSort(v);
	vector<int>::iterator itr = v.begin();

	cout << endl << "arranged:" << endl;
	while (itr != v.end()) {
		cout << *itr << " ";
		itr++;
		}
	cout << "/n";
}

