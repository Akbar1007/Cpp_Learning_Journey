// Day 11

// Program 1:

#include <iostream>
using namespace std;

// Function to find the largest element in an array using pointers
int findLargest(int* arr, int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i); //making it the largest
        }
    }
    return largest;
}

int main() {
    
    cout << "Program 1: " << endl;
    
    int size1;
    cout << "Enter the number of elements in the array: ";
    cin >> size1;

    int* arr1 = new int[size1]; // Dynamically allocate memory for the array
    cout << "Enter " << size1 << " elements: ";

    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    cout << "The largest element in the array is: " << findLargest(arr1, size1) << endl;
    delete[] arr1; //free the dynamically allocated memory
		}