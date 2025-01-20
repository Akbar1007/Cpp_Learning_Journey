// Program 2:
#include <iostream>
using namespace std;

void sortNums(int* arr, int size) {
   for (int i = 0; i < size - 1; i++) {
       for (int j = i + 1; j < size; j++) {
           if (arr[i] > arr[j]) {
               // We need to swap elements
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
   }
}

int main() {
   int size;

   cout << "Enter the number of elements: ";
   cin >> size;

   // Give memory for the array here
   int* arr = new int[size];

   cout << "Enter the elements: ";
   for (int i = 0; i < size; i++) {
       cin >> arr[i];
   }

   sortNums(arr, size);

   cout << "Sorted numbers in ascending order: ";
   for (int i = 0; i < size; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;

   // and then deleting the memory I gave before
   delete[] arr;

   return 0;
}