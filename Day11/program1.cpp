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

// Function to calculate the average of dynamically allocated array elements
double calculateAverage(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i); // Use pointer arithmetic to access elements
    }
    return static_cast<double>(sum) / size;
}

// My function to modify a specific element in a 2D array
void modify2DArray(int (*arr)[3], int row, int col, int newValue) {
    *(*(arr + row) + col) = newValue; // Modify element at arr[row][col]
}

// Function to print a 2D array
void print2DArray(int (*arr)[3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(*(arr + i) + j) << " "; // Access the array using pointers
        }
        cout << endl;
    }
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