// Program 3:
#include <iostream>
using namespace std;

void findWinner(int* scores, int size, char* result) {
   int y_total = 0, o_total = 0; 

   for (int i = 0; i < size; i++) {
       if (i % 2 == 0) {
           y_total += scores[i]; // Even indices: Your scores
       }
       else {
           o_total += scores[i]; // Odd indices: Opponent's scores
       }

       // Determine who is currently winning
       if (y_total > o_total) {
           result[i / 2] = 'Y';
       }
       else {
           result[i / 2] = 'O';
       }
   }
}

int main() {
   int size;

   cout << "Enter the number of scores: (2, 4, 6, 8, or any other even number)";
   // Here we asked to write even numbers because it is wrong to enter odd number of scores. 
   // 3 for Y and 4 for O. they both need to have the same number of scores
   cin >> size;

   // again giving memory for the scores array like we did in program 2
   int* scores = new int[size];

   cout << "Enter the scores: ";
   for (int i = 0; i < size; i++) {
       cin >> scores[i];
   }

   // I gave memory for the result array
   char* result = new char[size / 2];

   findWinner(scores, size, result);

   cout << "Who is currently winning: ";
   for (int i = 0; i < size / 2; i++) {
       cout << "\"" << result[i] << "\" ";
   }
   cout << endl;

   // and then deleting the memory given
   delete[] scores;
   delete[] result;

   return 0;
}