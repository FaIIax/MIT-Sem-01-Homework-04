#include <iostream>
using namespace std;

int main() {

 int count, i=0;
 double number, average, sum=0;

//Ask the user the number of inputs
 cout << "How many numbers: ";
 cin >> count;

//Input numbers and sum them
 while(i < count) {
   cout << "Enter a number: ";
   cin >> number;
   sum = sum + number;
   i++;
 }

\//Calculate average
 average = sum / count;
 
 //Display average
 cout << "Average: " << average << endl;

return 0; 
}