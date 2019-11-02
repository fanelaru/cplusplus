#include "pch.h"
#include "Tweeter.h"
#include <iostream>
#include <string>


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

std::string Tweeter::getTweeter() const
{
	return tweeterhandle;
}

void Tweeter::setTweeter(std::string a)
{
	tweeterhandle = a;
}