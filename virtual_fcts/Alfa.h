#ifndef ALFA_H
#define ALFA_H

#include <iostream>

using std::cout;
using std::endl;

class Alfa
{
    private:
        virtual void s()
        {
            cout << "Asta e o functie a clasei Alfa" << endl;
        }
    friend int main();
};

#endif // ALFA_H
