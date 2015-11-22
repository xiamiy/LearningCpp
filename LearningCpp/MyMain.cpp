#include "ITest.h"
#include <iostream>
using namespace std;

void operationDesc()
{
	cout << "======================= make a choose =======================" << endl;
	cout << "-1: exit" << endl;
	cout << "1: revert chars" << endl;
	cout << "2: other" << endl;
	cout << "=============================================================" << endl;
	cout << "input your choice : " << endl;
}

void main()
{
	int operation = 0;
	operationDesc();
	cin >> operation;
	ITest* test = NULL;
	while (operation >= 0)
	{
		switch (operation)
		{
		default:
			test = NULL;
			break;
		case 1:
			test = new ReverseChars();
			break;
		case 2:
			test = new Other();
			break;
		}
		if (test != NULL) test->test();
		if (test != NULL) delete test;
		cin.clear();
		cin.sync();
		operationDesc();
		cin >> operation;
	}
	//system("pause");
}
