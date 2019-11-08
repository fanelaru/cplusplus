#include "pch.h"
#include "Resource.h"
#include <iostream>

Resource::Resource(std::string n):name(n)
{
    std::cout << "constructor" << std::endl;
}

std::string Resource::getName() const
{
    return name;
}

Resource::~Resource()
{
    std::cout << "destructor" << std::endl;
}
