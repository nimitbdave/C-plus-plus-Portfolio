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

//division by zero error

int main() {
  
  int number = 0; 
  //if something could cause a potential error, surround it with a try block.  
  try{
  
    if(number != 0){
      cout << 2/number << endl;
    } else throw(number);   //this THROW will look for a CATCH  
  }
    catch(int number){         //The catch area is where we will catch the number that was entered.
    //don't have to do this, but it helps, so that the error message makes sense.  
    
      cout << number << " is not valid" << endl; 
    }
    
    //Brief SUMMARY:  
    //Therefore, instead of causing an error at 2/number (line 25), 
    //by putting this inside of a try-block and then throwing, 
    //if user would enter a 0, which would cause this potential error 
    //we're instead going to catch it in the CATCH area, and solve it, 
    //keeping the program from crashing.  
    //This is a brief explanation of exceptions.  
    
  return 0;

}
