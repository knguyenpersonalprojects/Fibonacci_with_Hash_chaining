#pragma once
#include<iostream>
#include<list>
using namespace std;

class Hash
{
private:
	list<int>* hashtable;
	int hashsize = 12;

public:
	Hash(int num);
	int HashFunction(int num)
	{
		return (num % 7);
	}
	void Insert(int num);
	bool Search(int num);
	void Display();

	

};
