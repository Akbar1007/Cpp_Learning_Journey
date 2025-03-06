#ifndef STOCKEX_H
#define STOCKEX_H

#include <iostream>
#include <string>

class StockEx {
private:
    // out private members
    std::string currency; 
    float mktrate;        
    int date;             

public:
    // my paarmeterized constructor
    StockEx(std::string currency = "USD", float mktrate = 1.0, int date = 20250305);

    // multiplication 
    float operator*(float amount) const;

    // subtraction 
    float operator-(const StockEx &other) const;

    // stream insertion <<
    friend std::ostream &operator<<(std::ostream &out, const StockEx &s);

    // stream extraction >>
    friend std::istream &operator>>(std::istream &in, StockEx &s);
};

#endif