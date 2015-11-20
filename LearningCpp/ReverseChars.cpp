#include "ITest.h"
#include <iostream>
using namespace std;

void ReverseChars::test()
{
	char* str = NULL;
	str = (char*)malloc(50);
	cin >> str;

	char* revertStr = reverse(str);
	cout << str << " => " << revertStr << endl;

	free(str);
	free(revertStr);
}

char* ReverseChars::reverse(char* str)
{
	if (str != NULL)
	{
		int strLength = strlen(str);
		if (strLength > 0)
		{
			char* reverseStr = (char*)malloc(strLength + 1);
			*(reverseStr + strLength) = '\0';
			for (int i = 0; i < strLength; ++i)
			{
				*(reverseStr + i) = *(str + strLength - 1 - i);
			}
			return reverseStr;
		}
	}
	return NULL;
}