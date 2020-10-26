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
  
  vector <int> lotteryNumVect(10);             //create vector, of data type you want to store 
  
  int lotteryNumArray[5] = {4, 13, 14, 24, 34}; 
  
  lotteryNumVect.insert(lotterNumVect.begin(), lotteryNumArray, lotteryNumArray+3); 
  //start inserting at the beginning of the vector, 
  //then the array that we want to insert into it, 
  //then we only want to take the first 3 numbers from the array
  
  lotteryNumVect.insert(lotteryNumVect.begin()+5, 44) //+5 to get to the 5th index.  
  
  cout << lotteryNumVect.at(2) << endl;   //Output 3rd value.  
  
  //push_back will add a value at the end of our vector.  
  
  lotteryNumVect.push_back(64);
  cout << "Final Value " << lotteryNumVect.back() << endl; 
  
  lotteryNumVect.pop_back(); //pop_back removes the final value
  
  cout << "First Value " << lotteryNumVect.front() << endl; 
  
  cout << "First Value " << lotteryNumVect.empty() << endl; //empty returns 1/true if empty, 0 if empty.
  
  
  return 0;

}
