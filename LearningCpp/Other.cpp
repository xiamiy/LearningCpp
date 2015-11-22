#include "ITest.h"
#include "UtilMine.h"
#include <iostream>
using namespace std;

void Other::test()
{
	char* p = (char*)malloc(50);
	cin >> p;
	cout << UtilMine::Ltrim(p) << endl;
	cin >> p;
	cout << UtilMine::Rtrim(p) << endl;
	cin >> p;
	cout << UtilMine::Trim(p) << endl;
}

