#pragma once
#include <string>

class Resource
{
public:
    Resource(std::string n);
    std::string getName() const;
    ~Resource();
private:
    std::string name;
};

