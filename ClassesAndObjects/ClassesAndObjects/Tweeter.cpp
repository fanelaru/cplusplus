#include "pch.h"
#include "Tweeter.h"
#include <iostream>


Tweeter::Tweeter(std::string first, std::string last, int arbno, std::string handle)
	:Person(first, last, arbno),
	tweeterhandle(handle)
{
	std::cout << "constructing tweeter " << tweeterhandle << std::endl;
}


Tweeter::~Tweeter()
{
	std::cout << "destructing tweeter " << tweeterhandle << std::endl;
}
