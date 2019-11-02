#include <iostream>
using namespace std;

template <class fane>
fane addNo(fane a, fane b) {
    return (a+b);
}

int main()
{
    double x=7.65, y=43.43, z;
    double a=7, b=43, c;
    z=addNo(x,y);
    c=addNo(a,b);
    cout << z << " " << c << endl;
    return 0;
}
