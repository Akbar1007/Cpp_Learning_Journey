// Program 2:

#include <iostream>
#include <string>
using namespace std;

// funciton that swaps the the values
void swapStrings() {
   string str1, str2;
   cout << "Enter the first string: ";
   cin >> str1;
   cout << "Enter the second string: ";
   cin >> str2;

   string* pStr1 = &str1;
   string* pStr2 = &str2;

   string temp = *pStr1;
   *pStr1 = *pStr2;
   *pStr2 = temp;

   cout << "After swapping:" << endl;
   cout << "First string: " << *pStr1 << endl << "Second string: " << *pStr2 << endl;
}

int main() {
   // calling the function here
   swapStrings();
   cout << "Finished" << endl;

	return 0;
}