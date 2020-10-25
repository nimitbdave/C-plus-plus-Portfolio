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
  
  int greetingOption = 2;
  
  switch(greetingOption){
      
    case 1: 
      cout << "bonjour" << endl;
      break;
    
    case 2: 
      cout << "Hola" << endl;
      break;
      
    case 3: 
      cout << "Hallo" << endl;
      break;
      
    default: 
      cout << "Hello" << endl;
      
  }
      
  return 0;

}
