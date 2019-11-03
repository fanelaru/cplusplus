// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	Person p1("Andrei", "Popescu", 12);
    Person p2("Andrei", "Ionescu", 120);
    Person p3("Andrei", "Georgescu", 1200);
	{
		Tweeter t1("Razvan", "Ionescu", 123, "@rionescu");
		string name2 = t1.getName();
		t1.setNumber(10); //setter inline
		cout << t1.getTweeter() << endl;
		string newtweet;
		cin >> newtweet;
		t1.setTweeter(newtweet);
		cout << t1.getTweeter() << endl;
	}
	string name = p1.getName();
	p1.setNumber(15);
	cout << "Prima persoana: " << name << " No " << p1.getNumber() << endl;

	Status s = Pending;
	s = ok;

	FileError fe = FileError::nok;
	NetworkError ne = NetworkError::ok;

    if (p1 < p2)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    if (p1 < 10)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    if (100 < p1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

	return 0;
}
