#include <iostream>
using namespace std;

int main() {
  
int num1, num2, scf, gcd, i;

//Asking the user to input two integers
cout << "Enter the first number: ";
cin >> num1;
cout << "Enter the second number: ";
cin >> num2;

//Calculate greatest common divisor
for(i=1; i<=num1 && i<=num2; i++){
  if(num1%1==0 && num2%i==0){
    gcd = i;
  }
}

//Calculate smallest common factor
scf = (num1*num1)/gcd;

//Dsiplay smallest common divisor
cout << "Smallest common factor is " << scf << endl;

return 0;

}