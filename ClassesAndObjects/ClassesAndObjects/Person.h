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
	std::string getName() const;
	void setNumber(int a) { arbno = a; };
	int getNumber() const { return arbno;}
	~Person();
};

