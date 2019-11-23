#pragma once
#include <string>
#include "Resource.h"

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbno;
    Resource* pR;

    friend bool operator<(int i, Person const& p);
public:
	Person();
    ~Person();
	Person(std::string a, std::string b, int c);
    // Copy ctor
    Person(Person const& p);
    // Copy assignment operator
    Person& operator=(const Person& p);
	std::string getName() const;
	void setNumber(int a) { arbno = a; };
    void setFirstName(std::string fn) { firstname = fn; };
	int getNumber() const { return arbno;}
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
    void addResource();
};

bool operator<(int i, Person const& p);