// Day 9

// Program 1:
#include <iostream>
using namespace std;

// Function to calculate the sum of elements more than 10
int sumTen(int arr[], int size) {
    int sum = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    cout << "Enter " << size << " elements for the array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] > 10) { // Only consider numbers greater than 10
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int size=0;
    int a[9999];
    cout << "Sum of elements greater than 10: " << sumTen(a, size) << endl;
    return 0;
}