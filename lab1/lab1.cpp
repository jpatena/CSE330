// Class: CSE 330
// Term: Spring 2014
// Instructor: George M. Georgiou
// Name: Jaron Patena, JinYong Doh
// Lab 1
// Title: Arrays of integers

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int a[52], b[52], c[52]; 
  srand(10);

  for(int i=0; i<52; i++)
  {
    // generates random numbers 0-100
    a[i] = rand() % 101;
    b[i] = rand() % 101;

    // calculates product of element-wise of the two arrays
    c[i] = (a[i] * b[i]);
  }

  // display numbers in a
  cout << "a: \n";
  for(int i=0; i<52; ++i)
  {
    cout << a[i] << ", ";
  }

  // display numbers in b
  cout << "\n\n" << "b: \n";
  for(int i=0; i<52; ++i)
  {
    cout << b[i] << ", ";
  }

  // display numbers in c
  cout << "\n\n" << "c: \n";
  for(int i=0; i<52; ++i)
  {
    cout << c[i] << ", ";
  }
  cout << "\n";

  return 0;
}
