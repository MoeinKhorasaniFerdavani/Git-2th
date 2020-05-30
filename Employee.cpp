#include <iostream>
using namespace std;
#include "Employee.h"










Employee::Employee()
{//Constructor
	cout << "\nEnter Employee filed" << endl;
	cout << "Famliy:\t";
	cin >> this->family;
	cout << "\nName:\t";
	cin >> this->name;
	cout << "\nCode meli:\t";
	cin >> this->id;
	cout << "\nSalery:\t";
	cin >> this->salery;
}

void Employee::setSalery(int salery)
{
	this->salery = salery;

}

Employee Employee::operator=(const Employee& rvalue)
{
	this->family = rvalue.family;
	this->name = rvalue.name;
	this->id = rvalue.id;
	this->salery = rvalue.salery;
	return rvalue;
}


Employee::~Employee()
{
}
// s
