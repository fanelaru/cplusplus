#pragma once
#include <string>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbno;
public:
	Person();
	Person(std::string a, std::string b, int c);
	std::string getName();
	~Person();
};

