#pragma once
#include "Person.h"

template <class T>
class Accum
{
private:
    T total;
public:
    Accum(T start): total(start) {};
    Accum<T> operator+=(T const& t) { return total = total + t; };
    T getTotal() const { return total; };
};

//template specialization
template <>
class Accum<Person>
{
private:
    int total;
public:
    Accum(int start) : total(start) {};
    Accum<Person> operator+=(Person const& t) { return total = total + t.getNumber(); };
    int getTotal() const { return total; };
};

void testTemplates();