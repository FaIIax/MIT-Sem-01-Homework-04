#include <iostream>
using namespace std;

int main() {

  int i=0, count=0;
  double number, max=0, min=0;

  //Ask the user number of inputs
  cout << "Enter the number of values: ";
  cin >> count;

  //Loop to find largest and smallest value
  while (i<count) {
    cout << "Enter a number: ";
    cin >> number;
    //Assign first values get for number for both max and min(only for the fist time)
    if (i==0) {
      max=number;
      min=number;
    }
    //Check values coming after first value is the max or min
    else {
      if (number>max)
        max=number;
      else if (number<min)
        min = number;
    }
  
  i++;
  }

  //display largest and smallest value
  cout << "Largest number is " << max << endl;
  cout << "Smallest number is " << min << endl;

return 0;
}