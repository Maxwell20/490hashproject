#pragma once
#include <iostream>
#include <string>

using namespace std;

class HashIt
{
private:

	static const int tableSize = 19;

	struct item
	{
		char command;
		double key;
		float datVal;
		item* next;
	};

	item* hashTable[tableSize];


public:

	HashIt();
	int Hash(int key);
	void addItem(int key, float datVal);
	int itemsInIndex(int index);
	void printTable();
	void printItemsInIndex(int index);
	void findSomeItem(int key);
	void deleteItem(int key);
};