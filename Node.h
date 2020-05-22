#pragma once
#include <iostream>
using namespace std;

#include "Employee.h"


class Node
{
	Employee data;
	Node* next;

public:
	Node(Employee);
	~Node();
};

