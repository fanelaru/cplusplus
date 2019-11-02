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
	Person();
	Person(string a, string b);
	string getName();
	~Person();
};

