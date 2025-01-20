// Template functions are easy to work with when there are different data types.

// It enables the same function to be used with various types, avoiding the need to write separate functions for each type.

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;         // Works with integers
    cout << add(3.5, 4.5) << endl;     // Works with doubles
    
    return 0;
}

