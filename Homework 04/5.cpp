#include <iostream>
using namespace std;

int main() {

int num1, num2, gcd, i;

//Ask the user to input two inteagers
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;

//Find greatest common divisor
for(i=1;i<=num1 && i<=num2;i++){
  if (num1%i==0 && num2%i==0){
    gcd = i;
  }
}
  
//display greatest common divisor
cout << "Greatest common divisor of "<<num1<<" and "<<num2<<" is "<<gcd<<endl;

return 0;
}