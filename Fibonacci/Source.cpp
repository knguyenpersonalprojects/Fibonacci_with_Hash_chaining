#include<iostream>
#include<list>
#include<vector>
#include"Fib.h"
using namespace std;






int main()
{
	int a[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144. };
	int size = sizeof(a) / sizeof(a[0]);
	
	Hash h(7);
	for (int i = 0; i < size; i++)
	{
		h.Insert(a[i]);
	}
	h.Display();
	int search=66;
	bool isFound;
	isFound = h.Search(search);
	if (isFound == true)
	{
		cout << "The number is a Fibonacci number" << endl;
	}
	else
	{
		cout << "The number is not a Fibonacci number" << endl;
	}
	

}