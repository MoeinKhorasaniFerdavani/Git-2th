#pragma once
#include <iostream>
using namespace std;
class Employee
{
	//hello
	string family ,name;
	int id, salery;

public:
	Employee();
	void setSalery(int);
	Employee operator= (const Employee&);
	~Employee();
};

