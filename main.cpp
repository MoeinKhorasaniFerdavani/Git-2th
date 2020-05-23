// IN THE NAME OF GOD
#include <iostream>
using namespace std;
//Git hub proje

class c
{
	int data;
public:
	c(int data = 0)
	{
		this->data = data;
	}
	void setData(int data)
	{
		this->data = data;
	}
	c operator= (int data)
	{
		this->data = data;
	}

};

int main()
{
	cout << "Hello world" << endl;
	c clas;
	clas = 2;
	// comment
	system("pause");
       // hello

	return 0;
}
//r
ahman1400 
