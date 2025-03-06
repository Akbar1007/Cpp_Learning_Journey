// Day 15: Operator Overloading

#include <iostream>
#include "StockEx.h"

int main() {
    StockEx stock1("USD", 104.5, 20250305);
    StockEx stock2("EUR", 112.3, 20250304);
    StockEx stock3;

    std::cout << "Enter stock exchange details for Stock 3:\n";
    std::cin >> stock3;

    // to show details:
    std::cout << "\nStock Exchange Details:\n";
    std::cout << "Stock 1: " << stock1 << std::endl;
    std::cout << "Stock 2: " << stock2 << std::endl;
    std::cout << "Stock 3: " << stock3 << std::endl;

    // I overloaded * operator 
    float amount = 100; 
    std::cout << "\nConverting " << amount << " in Stock 1's currency: " << stock1 * amount << std::endl;
    std::cout << "Converting " << amount << " in Stock 2's currency: " << stock2 * amount << std::endl;

    // I overloaded - operator to calculate rate difference
    std::cout << "\nDifference in market rates between Stock 1 and Stock 2: " << stock1 - stock2 << std::endl;

    return 0;
}
