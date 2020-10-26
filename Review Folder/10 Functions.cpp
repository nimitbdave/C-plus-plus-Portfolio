//This is a comment.

/*
multi-line
*/

//Libraries

#include <iostream>
#include <vectors>
#include <string>
#include <fstream>

using namespace std

//Functions

int addNumbers(int firstNum, int secondNum = 0){ //set default value at 0, here.

  int combinedValue = firstNum + secondNum; 
  return combinedValue;
  
}

int addNumbers(int firstNum, int secondNum, int thirdNum){ //okay to have addNumbers twice, just need diff attributes.

  return firstNum + secondNum + thirdNum;
  
}

//recursive function
int getFactorial(int number){
  
  int sum; 
  if(number == 1) sum = 1;
  else sum = getFactorial(number - 1) * number;   //instance of recursion, calling itself in itself.
  return sum; 
 
  //getFactorial(2) [Returns 2] * 3 = 2 * 3 = 6
  //getFactorial(1) [Returns 1] * 2 = 1 * 2 = 2
  
}  

int main() {
  
  cout << addNumbers(1) << endl;
  cout << addNumbers(1, 5, 6) << endl; 
  
  cout << "The factorial of 3 is " << getFactorial(3) << endl; 
  
  return 0;

}
