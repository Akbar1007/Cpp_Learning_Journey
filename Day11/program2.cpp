// Program 2:

#include <iostream>
using namespace std;

double calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Use pointer arithmetic to access elements
    }
    return static_cast<double>(sum) / size;
}

int main() {    
    cout << "Program 2: " << endl;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr2 = new int[n]; //Here I dynamically allocated memory for the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *(arr2 + i); // using pointer arithmetic
    }

    cout << "The average of the elements is: " << calculateAverage(arr2, n) << endl;
    delete[] arr2; //and then I free dynamically allocated memory
}