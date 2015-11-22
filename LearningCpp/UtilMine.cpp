#include "UtilMine.h"
#include <string>
using std::string;

bool UtilMine::IsNullOrEmptyChars(char* str)
{
	return str == NULL || strlen(str) <= 0;
}

//ɾ���ַ�����ߵĿո�
char* UtilMine::Ltrim(char* p)
{
	if (!IsNullOrEmptyChars(p))
	{
		char* q = p;

		while (isspace(*q++));
	}
	return p;
}

//ɾ���ַ����ұߵĿո�
char* UtilMine::Rtrim(char* p)
{
	if (!IsNullOrEmptyChars(p))
	{
		size_t length = strlen(p);
		for (int i = length - 1; i >= 0; --i)
		{
			if (!isspace(*(p + i)))
			{
				*(p + i + 1) = '\0';
				break;
			}
		}
	}
	return p;
}

//ɾ���ַ����������ߵĿո�
char* UtilMine::Trim(char* p)
{
	string s = " asdfasdf ";
	s.erase(0, s.find_first_not_of(" "));
	s.erase(s.find_last_not_of(" "));
	return Rtrim(Ltrim(p));
}