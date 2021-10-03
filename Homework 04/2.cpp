#include <iostream>
using namespace std;

int main() {

 int count, i=0, greater=0;
 double number, average, sum=0;

//Ask the user the number of inputs
 cout << "How many numbers: ";
 cin >> count;

 while(i < count) {
   cout << "Enter a number: ";
   cin >> number;
   //Find number greater than 20 and sum them
   if(number >= 10) {
     sum = sum + number;
     greater = greater+1;
   }
   i++;
 }

//Calculate average
 average = sum / greater;

 //Display average
 cout << "Average: " << average << endl;

return 0; 
}