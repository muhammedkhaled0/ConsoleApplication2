#pragma once
#include<string>
using namespace std;
class Car
{
private:
	int model;
	string maker;
public:
	void setMaker(string m);
	string getMaker();
	void setModel(int m);
	int getModel();
	Car();
	~Car();
};

