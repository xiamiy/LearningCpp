#include "ITest.h"
#include <iostream>
using namespace std;

void Other::test()
{
	cout << " this is Other test !!!" << endl;
}

//ɾ���ַ�����ߵĿո�
char* Other::Ltrim(char* p)
{
	if (p == NULL)
	{
		return p;
	}

	char* q = p;

	while (isspace(*q))
	{
		++q;
	}

	if (p != q)
	{
		while (*p++ = *q++) {}
	}

	return p;
}