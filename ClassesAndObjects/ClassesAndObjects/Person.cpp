#include "pch.h"
#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;

Person::Person()
	:arbno(0)
{
	cout << "contructing " << firstname << " " << lastname << endl;
}

Person::Person(std::string a, std::string b, int c)
	:firstname(a), lastname(b), arbno (c)
{
	cout << "contructing " << getName() << endl;
}

Person::~Person()
{
	cout << "destructing " << firstname << " " << lastname << endl;
}

// good practice to make the getter const
std::string Person::getName() const
{
	return (firstname + " " + lastname);
}

// const function involves const obj
bool Person::operator<(Person const& p) const
{
    return arbno < p.arbno;
}
bool Person::operator<(int i) const
{
    return i < arbno;
}

//bool operator<(int i, Person const& p)
//{
//    return i < p.getNumber();
//}

// because is declared as friend of class can have access to private data
bool operator<(int i, Person const& p)
{
    return i < p.arbno;
}