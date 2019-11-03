#include "pch.h"
#include "Accum.h"
#include <iostream>
#include <string>

//using std::string;

void testTemplates()
{
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    std::cout << integers.getTotal() << std::endl;

    Accum<std::string> strings("");
    //in compilatoarele noi ar trebui sa mearga
    //Accum strings(std::string(""));
    strings += "ahoy ";
    strings += "world";
    std::cout << strings.getTotal() << std::endl;
}
