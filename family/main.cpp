#include <iostream>
using namespace std;

template <class fane>
fane addNo(fane a, fane b) {
    return (a+b);
}

template <class PRIMA, class ADOUA>
PRIMA maimic(PRIMA a, ADOUA b) {
    return (a<b?a:b);
}

int main()
{
    double x=7.65, y=43.43, z;
    double a=7, b=43, c;
    int m=68;
    double n=67.45;
    z=addNo(x,y);
    c=addNo(a,b);
    cout << z << " " << c << endl;
    cout << maimic(m,n) << endl;
    cout << maimic(n,m) << endl;
    return 0;
}
