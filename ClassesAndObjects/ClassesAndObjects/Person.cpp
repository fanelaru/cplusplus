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

std::string Person::getName(){
	return (firstname + " " + lastname);
}