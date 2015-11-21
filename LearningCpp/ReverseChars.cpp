#include "ITest.h"
#include <iostream>
using namespace std;

void ReverseChars::test()
{
	char* str = NULL;
	str = (char*)malloc(50);
	cin >> str;

	char* reverseStr = (char*)malloc(strlen(str) + 1);
	reverseStr = reverse(str, reverseStr);

	cout << str << " => " << reverseStr << endl;

	free(str);
	free(reverseStr);
}

char* ReverseChars::reverse(char* src, char* dst)
{
	if (src != NULL)
	{
		int strLength = strlen(src);
		if (strLength > 0)
		{
			*(dst + strLength) = '\0';
			for (int i = 0; i < strLength; ++i)
			{
				*(dst + i) = *(src + strLength - 1 - i);
			}
			return dst;
		}
	}
	return NULL;
}