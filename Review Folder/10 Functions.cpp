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



int main() {
  
  cout << addNumbers(1) << endl;
  cout << addNumbers(1, 5, 6) << endl; 
  
  
  
  return 0;

}
