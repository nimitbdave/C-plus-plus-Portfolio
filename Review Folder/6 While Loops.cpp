//Program which outputs random numbers from 0 to 99.  

/*
multi-line
*/

//Libraries

#include <iostream>
#include <vectors>
#include <string>
#include <fstream>

using namespace std

int main() {
  
  int randNum = (rand() % 100) //generate random numbers from 0 to 99.  
  
  while(randNum != 100){ 
    cout << randNum << ", "; 
    randNum = (rand() % 100) + 1; 
  }
  
  cout << endl;  
  
  return 0;

}
