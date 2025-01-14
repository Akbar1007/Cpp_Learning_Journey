// Program 2:
#include <iostream>
using namespace std;

// Function is to get the sum of digits of a number
int sumOfDigits(int num) {
   int sum = 0;
   while (num != 0) {
       sum += num % 10;
       num /= 10;
   }
   return sum;
}

// Function to sum digits in a range
int digitsSum(int start, int end) {
   int totalSum = 0;
   for (int i = start; i <= end; ++i) {
       totalSum += sumOfDigits(i);
   }
   return totalSum;
}

int main() {
   int start, end;
   cout <<"Enter the first and the last number : " << endl;
   cin >> start >> end;
   cout << "Sum of digits from " << start << " to " << end << " is: " << digitsSum(start, end) << endl;
   return 0;
}