#include "pch.h"
#include "Item.h"


Item::Item()
{
}


Item::Item(Zayvka zayvka)
{
	this->zayvka = zayvka;
	next = NULL;
}

Item::~Item()
{
}
