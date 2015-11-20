#ifndef _ITEST_H
#define _ITEST_H

#include <iostream>
using namespace std;

class ITest
{
public:
	virtual ~ITest() { }
	virtual void test() { }
};

class ReverseChars : public ITest 
{
public:
	void test() override;
	char* reverse(char* str);
};

class Other : public ITest
{
public:
	void test() override;
};

#endif