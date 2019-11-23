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

//typedef struct {
//    float red;
//    float green;
//    float blue;
//} color;

// nu e acceptata in C folosirea 'color moon ...'
// daca definesti structura ca mai jos, pune 'struct color moon ...'
struct color {
    float red;
    float green;
    float blue;
};

int main()
{
    double x=7.65, y=43.43, z;
    double a=7, b=43, c;
    int m=68;
    double n=67.45;
    z=addNo(x,y);
    c=addNo(a,b);
    color moon = {14.14, 16.16, 18.18};
    cout << z << " " << c << endl;
    cout << maimic(m,n) << endl;
    cout << maimic(n,m) << endl;

    int firstvalue, secondvalue;
    int * mypointer = &firstvalue;

    //mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    int **myppointer = &mypointer;

    cout << "firstvalue is " << firstvalue << endl;
    cout << "secondvalue is " << secondvalue << endl;
    cout << "secondvalue is " << mypointer << endl;

    return 0;
}
