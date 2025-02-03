// Program 3:

#include <iostream>
using namespace std;

// Function to modify a specific element in a 2D array
void modify2DArray(int (*arr)[3], int row, int col, int newValue) {
    *(*(arr + row) + col) = newValue; // Modify element at arr[row][col]
}

// Function to print a 2D array
void print2DArray(int (*arr)[3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << *(*(arr + i) + j) << " "; //Access array using pointers
        }
        cout << endl;
    }
}

int main() {
    cout << "Program 3: " << endl;
    int arr3[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original 2D array:" << endl;
    print2DArray(arr3, 3, 3);

    modify2DArray(arr3, 1, 1, 100); // Modify arr[1][1] to 100

    cout << "Modified 2D array:" << endl;
    print2DArray(arr3, 3, 3);

    return 0;
}