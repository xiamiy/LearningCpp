#ifndef _ITEST_H_
#define _ITEST_H_

#include <iostream>
using namespace std;

class ITest
{
public:
	ITest() { }
	virtual ~ITest() { }
	virtual void test() { }
};

class ReverseChars : public ITest 
{
public:
	void test() override;
	char* reverse(char* src, char* dst);
};

class Other : public ITest
{
public:
	void test() override;
	char* Ltrim(char* p);
};

#endif