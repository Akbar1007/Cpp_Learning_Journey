#include "StockEx.h"

// Constructor to initialize what we need
StockEx::StockEx(std::string currency, float mktrate, int date) {
    this->currency = currency;
    this->mktrate = mktrate;
    this->date = date;
}

// * operator to exchange currency based on market rate
float StockEx::operator*(float amount) const {
    return amount * mktrate;
}

// - operator to calculate the difference between two market rates
float StockEx::operator-(const StockEx &other) const {
    return this->mktrate - other.mktrate;
}

// << operator to display stock exchange details
std::ostream &operator<<(std::ostream &out, const StockEx &s) {
    out << "Currency: " << s.currency << ", Market Rate: " << s.mktrate << ", Date: " << s.date;
    return out;
}

// >> operator to take input from the user
std::istream &operator>>(std::istream &in, StockEx &s) {
    std::cout << "Enter Currency: ";
    in >> s.currency;
    std::cout << "Enter Market Rate: ";
    in >> s.mktrate;
    std::cout << "Enter Date (YYYYMMDD): ";
    in >> s.date;
    return in;
}
