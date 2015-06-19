// chapter 7: exercise 7
// used mergesort from HW2

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

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
int main() 
{
	vector<char> v1, v2;
	string w1 = "rescue";
	string w2 = "secure";
	char c1;
	char c2;

	cout << w1 << " & " << w2 << endl;
	
	for(int i=0; i<w1.length(); ++i)
	{
		char c1 = w1[i];
		char c2 = w2[i];
		v1.push_back(c1);
		v2.push_back(c2);
	}
	
	mergeSort(v1); // plug in vector to mergeSort
	mergeSort(v2);

	vector<char>::iterator itr1 = v1.begin();
	vector<char>::iterator itr2 = v2.begin();

	bool error = false;

	while (itr1 != v1.end()) 
	{
		// if both chars are the same
		if(*itr1 == *itr2)
		{
			itr1++;
			itr2++;
		}

		// if both chars not the same 
		else 
		{
			error = true;
			break;
		}
	}

	if(error == true) cout << "Both aren't anagrams." << endl;
	else cout << "Both are anagrams." << endl;

}

