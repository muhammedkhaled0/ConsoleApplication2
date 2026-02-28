#include "Car.h"
#include<iostream>
using namespace std;
void Car::setModel(int m)
{
	model = m;
}
void Car::setMaker(string m) {
	maker = m;
}
int Car::getModel() {
	return model;
}
string Car::getMaker() {
	return maker;
}
Car::Car() {
	cout << "Hi From Constructor\n";
}
Car::~Car() {
	cout << "Bay Bay From Destructor\n";
}