#ifndef _UTILMINE_H_
#define _UTILMINE_H_

class UtilMine
{
public:
	static bool IsNullOrEmptyChars(char* str);
	static char* Ltrim(char* p);
	static char* Rtrim(char* p);
	static char* Trim(char* p);
};

#endif