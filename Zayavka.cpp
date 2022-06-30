#include "pch.h"
#include "Zayvka.h"
#include<iostream>


Zayvka::Zayvka()
{
	area = "";
	id = 0;
	pass = "";
	date = "";
}

Zayvka::Zayvka(string area, int id, string pass, string date)
{
	this->area = area;
	this->id = id;
	this->pass = pass;
	this->date = date;
}

void Zayvka::Print()
{
	cout << id << " " << date << " " << area << " " << pass << endl;
}

Zayvka::~Zayvka()
{
}