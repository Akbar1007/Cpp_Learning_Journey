// Another example:


#include <iostream>
using namespace std;

template <typename T>
T add (T a, T b) {
    return a + b;
}

int main() {
    // int a;
    // float b;
    // cout << "Enter to arguments: " << endl;
    // cin >> a >> b;
    cout << "Here is the result: " << add(5, 5) << endl;
    
    
    return 0;
}