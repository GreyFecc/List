#include "pch.h"
#include "Spisok.h"


Spisok::Spisok()
{
	first = last = NULL;
}

void Spisok::Add(Zayvka zayvka)
{
	if (first == NULL) {
		first = last = new Item(zayvka);
	}
	else {
		Item* it = new Item(zayvka);
		last->next = it;
		last = last->next;
	}
}

void Spisok::Print()
{
	Item* temp = first;
	while (temp != NULL) {
		temp->zayvka.Print();
		temp = temp->next;
	}
}

void Spisok::Remove(int index)
{
	Item* temp = first;
	int count = 0;
	if (index == 1) {
		Item* t = first;
		first = first->next;
		delete t;
	}
	else while (temp != NULL) {
		if (count == index - 2) {
			Item* t = temp->next;
			temp->next = temp->next->next;
			delete t;
		}
		count++;
		temp = temp->next;
	}
}

void Spisok::SpecPrint(int i, string d)
{
	Item* temp = first;
	while (temp != NULL) {
		int l = temp->zayvka.id;
		if (l == i) {
			string ss = temp->zayvka.date;
			if (ss == d) {
				temp->zayvka.Print();
			}
		}
		temp = temp->next;
	}

}

int Spisok::Size()
{
	Item* temp = first;
	int k = 0;
	while (temp != NULL) {
		k++;
		temp = temp->next;
	}
	return k;
}


Spisok::~Spisok()
{
}
