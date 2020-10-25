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

int main() {
  
  int index = 1; 
  
  //WHILE LOOP.  Output numbers 1 through 10.  
  while(index <= 10) {
    cout << index << endl; 
    index++;
  }
  
  // DO-WHILE LOOP
  string numberGuessed; 
  int intNumberGuessed = 0;
  
  do {
  
    cout << "Guess between 1 and 10: ";
    getline(cin, numberGuessed); 
    intNumberGuessed = stod(numberGuessed)                           //stod() Converts from String to Double
    cout << intNumberGuessed << endl; 
    
  } while(intNumberGuessed != 4); 
  
  cout << "You win" << endl; 
  
  return 0;

}
