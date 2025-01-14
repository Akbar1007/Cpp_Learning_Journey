//Program 3:
#include <iostream>
using namespace std;

// For maximum:
template <typename T>
T maximum(T a, T b) {
   return (a > b) ? a : b;
}

// For minimum:
template <typename T>
T minimum(T a, T b) {
   return (a < b) ? a : b;
}

int main() {
   // Asking the user to input the value and then saving them in a variable:
   int int1, int2;
   cout << "Enter integer 1 and integer 2: " << endl;
   cin >> int1 >> int2;
   char char1, char2;
   cout<< "Enter character 1 and character 2: " << endl;
   cin >> char1 >> char2;
   float float1, float2;
   cout << "Enter float number 1 and float number 2 :" << endl;
   cin >> float1 >> float2;

   // Prnting out those values using the function templates:
   cout << "Maximum of " << int1 << " and " << int2 << ": " << maximum(int1, int2) << endl;
   cout << "Minimum of " << int1 << " and " << int2 << ": " << minimum(int1, int2) << endl;

   cout << "Maximum of '" << char1 << "' and '" << char2 << "': " << maximum(char1, char2) << endl;
   cout << "Minimum of '" << char1 << "' and '" << char2 << "': " << minimum(char1, char2) << endl;

   cout << "Maximum of " << float1 << " and " << float2 << ": " << maximum(float1, float2) << endl;
   cout << "Minimum of " << float1 << " and " << float2 << ": " << minimum(float1, float2) << endl;

   return 0;
}
