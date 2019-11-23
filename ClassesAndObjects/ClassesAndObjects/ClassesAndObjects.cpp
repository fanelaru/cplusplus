// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <istream>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
#include "Accum.h"
#include "Resource.h"

using std::string;
using std::istream;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

void readAndPrint(istream& is)
{
    int x;
    if (is >> x)
        cout << "the int is " << x << endl;
    else
        cerr << "no int on input" << endl;
}

// template function
template <class T>
T max(T const& t1, T const& t2)
{
    return t1 < t2 ? t2 : t1;
}

int main()
{
    Person p1("Andrei", "Popescu", 12);
    Person p2("Andrei", "Ionescu", 120);
    Person p3("Andrei", "Georgescu", 1200);
    p3.addResource();
    p3.setFirstName("Gigel");
    p3.addResource();
    Person p4 = p3;
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

    cout << max(33, 34) << endl;
    cout << max<double>(33.5, 2) << endl;
    string s1 = "maxim", s2 = "minimum";
    cout << "max of " << s1 << " and " << s2 << " is " << max(s1, s2) << endl;
    cout << "max of " << p1.getNumber() << " and " << p2.getNumber() << " is " << max(p1, p2).getNumber() << endl;
    cout << "max of " << p1.getName() << " and " << p2.getName() << " is " << max(p1, p2).getName() << endl;

    testTemplates();

    Person* pPerson = &p1;
    // string realName = (*pPerson).getName();
    string realName = pPerson->getName();

    cout << realName << endl;

    int* badPointer=nullptr;
    if (badPointer)
    {
        *badPointer = 3;
    }

    // in C++ trebuie initializata. In C, nu!
    // int * const cpI;
    
    Person * const cpI=&p2;
    cout << cpI->getName() << endl;

    {
        Resource localResource("gigi marga");
        string localString = localResource.getName();
        cout << localString << endl;
    }

    Resource* pResource = new Resource("fane babanu");
    string newString = pResource->getName();

    cout << newString << endl;

    Resource* pResource_2 = pResource;

    delete pResource;
    pResource = nullptr;

    delete pResource; // nu crapa pentru ca nullptr
    // crash
    // delete pResource_2;

	return 0;
}
