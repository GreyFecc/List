#pragma once
#include "Item.h"

class Spisok
{
	Item* first;
	Item* last;
public:
	Spisok();
	void Add(Zayvka zayvka);
	void Print();
	void Remove(int index);
	void SpecPrint(int i, string d);
	int Size();
	~Spisok();
};