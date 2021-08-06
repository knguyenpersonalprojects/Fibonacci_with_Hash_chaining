#pragma once
#include"Fib.h"
#include<iostream>
#include<list>

Hash::Hash(int num)
{
	//intialize the hash table of n number of elements
	hashsize = num;
	hashtable = new list<int>[hashsize];
}
void Hash::Insert(int num)
{
	//input the Fibonacci numbers into a hash table
	int index;
	index = HashFunction(num);
	hashtable[index].push_back(num);

}
bool Hash::Search(int num)
{
	//create a list
	list<int>::iterator i;
	// get the index of the number after using the hash function
	int index = HashFunction(num);
	bool isFound = false;
	// go through the list and see if ith element equals to the number searching for 
	for (i = hashtable[index].begin(); i != hashtable[index].end(); i++)
	{
		if (*i == num)
		{
			isFound = true;
			break;
			
		}

	}
	//return true if number is found, vice versa
	return isFound;
}
void Hash::Display()
{
	for (int i = 0; i < hashsize; i++)
	{
		cout << i;
		for (auto x : hashtable[i])
		{
			cout << " ---->" << x;
		}
		cout << endl;
	}
}
