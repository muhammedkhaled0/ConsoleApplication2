#include <iostream>
#include<string>
#include "Car.h"
using namespace std;
int main()
{
    Car c;
    c.setModel(2010);
    c.setMaker("MKElsiny");
    cout << "The model is : " << c.getModel() << '\n' << "The Maker is : " << c.getMaker() << '\n';
}
