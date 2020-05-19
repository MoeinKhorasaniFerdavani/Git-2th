#include "Employee.h"



Employee::Employee()
{
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


Employee::~Employee()
{
}
