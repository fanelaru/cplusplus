#include <iostream>
#include "Sales_item.h"
using namespace std;

void function_1();
void function_2();

int main()
{
    function_1();
    function_2();
    return 0;
}

void function_1(){
    Sales_item book;
    std::cout << "read ISBN, number of copies sold, and sales price" << std::endl;
    std::cin >> book;
    std::cout << "write ISBN, number of copies sold, total revenue, and average price" << std::endl;
    std::cout << book << std::endl;
}

void function_2(){
    Sales_item item1, item2;

    std::cout << "read a pair of transactions" << std::endl;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl; //print their sum

}
