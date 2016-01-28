#include <iostream>
#include <string>
#include "HashIt.h"

using namespace std;

int HashIt::Hash(int key)
{
	int hash = 0;
	int index;

	for (int i = 0; i < tableSize; i++)
	{
		hashTable[i] = new item;
		hashTable[i]->command = NULL;
		hashTable[i]->key = -1;
		hashTable[i]->datVal = -1.0;
		hashTable[i]->next = NULL;

	}

	index = hash % tableSize;

	return index;
}
void HashIt::addItem(int key, float datVal)
{
	int index = Hash(key);

	if (hashTable[index]->key == -1)
	{
		hashTable[index]->key = key;
		hashTable[index]->datVal = datVal;
	}
	else
	{
		item* ptr = hashTable[index];
		item* n = new item;
		///n->command = command;
		n->key = key;
		n->datVal = datVal;
		n->next = NULL;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = n;
	}
}
int HashIt::itemsInIndex(int index)
{
	int count = 0;

	if (hashTable[index]->key == -1)
	{
		return count;
	}
	else
	{
		count++;
		item* ptr = hashTable[index];
		while (ptr->next != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}
	return count;
}
void HashIt::printTable()
{
	int num;
	for (int i = 0; i < tableSize; i++)
	{
		num = itemsInIndex(i);
		cout << "index  " << "Command  " << "Key  " << "Data  " << endl;
		cout << hashTable[i]->command << "  " << hashTable[i]->key << hashTable[i]->datVal << "  items in index = " << num << endl;
	}
}
void HashIt::printItemsInIndex(int index)
{

}
void HashIt::findSomeItem(int key)
{

}

void HashIt::deleteItem(int key)
{

}