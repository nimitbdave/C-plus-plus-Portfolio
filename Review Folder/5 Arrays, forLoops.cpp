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

//Think of arrays as boxes in memory.  

int main() {
  
  int myFavNum[5];  //Have to define inside arrays how many boxes you need, 
                    //or how many pieces of data you want to store in them at the very beginning.  
                    //Cannot be changed after defined.  Vectors can allow changing those values.  

  int badNums[5] = {4, 13, 14, 24, 34};   //Label index is 0, 1, 2, 3, 4.  
  
  cout << "Bad Number 1: " << badNums[0] << endl;  
  
  //Multidimensional 
  
  char myName[5][4] = {{'N', 'i', 'm', 'i', 't'}, 
                       {'D', 'a', 'v', 'e'}};
  
  cout << "2nd letter in 2nd array " << myName[1][1] << endl;
  
  myName[0][2] = 'e';
  
  cout << "New Value" << myName[0][2] << endl; 
  
  //PRINT ARRAY OUT.  
  
  for(int i = 1; i <= 10; i++){
      cout << i << endl; 
  }
    
  for(int j = 0; j < 2; j++){         //Since there are 2 arrays, use 2.  
      for(int k = 0; k < 2; k++){
        cout << myName[j][k]; 
      }
      cout << endl; 
  }
    
  return 0;

}
