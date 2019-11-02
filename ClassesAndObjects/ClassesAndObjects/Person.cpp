#include "pch.h"
#include "Person.h"

Person::Person()
{
}

Person::Person(string a, string b, int c)
	:firstname(a), lastname(b), arbno (c)
{
}

Person::~Person()
{
}

string Person::getName(){
	return (firstname + " " + lastname);
}