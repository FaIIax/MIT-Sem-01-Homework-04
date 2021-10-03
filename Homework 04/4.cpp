#include <iostream>
#include <bits/stdc++.h>  
using namespace std;

int main() {
  
  int n, i;	
	
  //Ask the user the number of inputs
	cout << "How many numbers: "; 
	cin >> n; 
	
  //define array
	int arr[n];
	
	//Prompt the user inputs to array
	for (i = 0; i < n; i++) {
		cout << "Please enter a number: " ;
		cin >> arr[i];
	}
	
	//Sort the array
	int c = sizeof(arr) / sizeof(arr[0]);
	sort(arr, arr + c); 

  //Display third smallest number
	cout << "Third smallest number is: " << arr[2] << endl;    

  return 0;
}