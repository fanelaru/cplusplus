#pragma once
#include <string>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbno;

    friend bool operator<(int i, Person const& p);
public:
	Person();
    ~Person();
	Person(std::string a, std::string b, int c);
	std::string getName() const;
	void setNumber(int a) { arbno = a; };
	int getNumber() const { return arbno;}
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
};

bool operator<(int i, Person const& p);