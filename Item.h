#pragma once
#include "Zayvka.h"

class Item
{
public:
	Item();
	Zayvka zayvka;
	Item* next;
	Item(Zayvka zayvka);
	~Item();
};
