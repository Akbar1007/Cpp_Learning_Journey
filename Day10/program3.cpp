// Program 3:
#include <iostream>
#include <string>
using namespace std;


// function that we will use 
void dynamicAllocation() {
   int* pInt = new int;
   char* pChar = new char;
   string* pStr = new string;

   cout << "Enter an integer: ";
   cin >> *pInt;

   cout << "Enter a character: ";
   cin >> *pChar;

   cout << "Enter a string: ";
   cin >> *pStr;

   cout << "You entered:" << endl;
   cout << "Integer: " << *pInt << endl << "Character: " << *pChar << endl << "String: " << *pStr << endl;

   // deallocating the memory
   delete pInt;
   delete pChar;
   delete pStr;
}

int main() {
   // calling the function 
   dynamicAllocation();
   cout << "Finished successfully." << endl;

   return 0;
}