#pragma once
#include <string>

using namespace std;

class Zayvka
{
public:
	string area;
	int id;
	string pass;
	string date;
	Zayvka();
	Zayvka(string area, int id, string pass, string date);
	void Print();
	~Zayvka();
};