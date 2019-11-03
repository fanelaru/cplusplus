#pragma once

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

void testTemplates();