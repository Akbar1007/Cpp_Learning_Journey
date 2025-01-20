// Program 3:
#include <iostream>
using namespace std;

// A recursive function to find greatest common denominator
int gcd(int a, int b) {
   if (b == 0)
       return a;
   return gcd(b, a % b);
}

int main() {
   int num1, num2;
   cout << "Enter your two numbers here: " << endl;
   cin >> num1 >> num2;
   cout << "Greateset common denominator of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
   return 0;
}