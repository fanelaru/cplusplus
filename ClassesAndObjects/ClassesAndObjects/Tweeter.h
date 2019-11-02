#pragma once
#include "Person.h"
class Tweeter :
	public Person
{
private:
	std::string tweeterhandle;

public:
	Tweeter(std::string first, std::string last, int arbno, std::string handle);
	~Tweeter();
	std::string getTweeter() const;
	void setTweeter(std::string a);
};

