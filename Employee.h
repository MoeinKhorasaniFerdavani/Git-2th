#pragma once
#include <iostream>
using namespace std;

class Employee
{
	string family ,name;
	int id, salery;
	string name;
	string family;

	
public:
	Employee();
	void setSalery(int);
	Employee operator= (const Employee&);
	~Employee();
};

