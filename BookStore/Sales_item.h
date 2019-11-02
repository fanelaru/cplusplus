#ifndef SALES_ITEM_H
#define SALES_ITEM_H

// Definition of Sales_item class and related functions goes here
#include <iostream>
#include <string>

class Sales_item
{
    friend std::istream& operator>>(std::istream&, Sales_item&);
    friend std::ostream& operator<<(std::ostream&, const Sales_item&);

    public:
        Sales_item();
        Sales_item(const std::string &book);
        Sales_item(std::istream &is);

        Sales_item& operator+=(const Sales_item&);

    // operations on Sales_item objects
    std::string isbn() const { return bookNo; }
    double avg_price() const;

    protected:

    private:
        std::string bookNo;      // implicitly initialized to the empty string
        unsigned units_sold;
        double revenue;
};

// nonmember binary operator: must declare a parameter for each operand
Sales_item operator+(const Sales_item&, const Sales_item&);

std::istream& operator>>(std::istream& in, Sales_item& s);
std::ostream& operator<<(std::ostream& out, const Sales_item& s);

#endif // SALES_ITEM_H
