#pragma once
#include <string>
using namespace std;

class Person
{
private:
	string firstname;
	string lastname;
	int arbno;
public:
	Person()=default;
	Person(string a, string b, int c);
	string getName();
	~Person();
};

