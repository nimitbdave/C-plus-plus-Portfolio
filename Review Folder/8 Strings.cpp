//Deeper look at strings.  

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
  
  //Primitive strings, in C.
  char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'}
  
  //Normal strings, in C++.  
  string birthdayString = " Birthday"; 
  
  cout << happyArray + birthdayString << endl;  //Happy Birthday.
  
  string yourName;
  cout << "What is your name " ;
  getline(cin, yourName);
  
  cout << "hello" << yourName << endl;  
  
  double eulersConstant = .57721;
  string eulerGuess;
  double eulerGuessDouble;
  
  cout << "What is Euler's Constant? ";
  getline(cin, eulerGuess); 
  
  eulerGuessDouble = stod(eulerGuess);
  
  if(eulerGuessDouble == eulersConstant){
    cout << "You are right" << endl; 
  } else {
    cout << "You are wrong" << endl; 
  }
  
  cout << "Size of String " << eulerGuess.size() << endl;       //Size of String 3
  cout << "Is string empty " << eulerGuess.empty() << endl;     //Is string empty 0
  cout << eulerGUess.append(" was your guess") << endl;         //.55 was your guess
  
  
  //~~~dog-cat string example for COMPARE
  string dogString = "dog";
  string catString = "cat"; 
  
  cout << dogString.compare(catString) << endl; 
  cout << dogString.compare(dogString) << endl; 
  cout << catString.compare(dogString) << endl; 
  
  
  //~~~name output example
  string wholeName = yourName.assign(yourName);
  cout << wholeName << endl; 
  
  string firstName = wholeName.assign(wholeName, 0, 5) //0 is where I first want to start pulling char's
                                                       //5 is the last place I want pulling char's.
  cout << firstName << endl;  // Notice, it grabbed from the string wholeName, to output firstName.
  
  //TO FIND THE INDEX/PLACE OF A CHARACTER IN A STRING.  
  int lastNameIndex = yourName.find("Banas", 0); 
  cout << "Index for last name " << lastNameIndex << endl; 
  
  yourName.insert (5, " Justin");     //insert Justin,  Output: Nimit Justin Dave
  cout << yourName << endl; 
  
  yourName.erase(6, 7)  //erase 6 char's, starting at the 7th index.  
  cout << yourName << endl; 
  
  your.replace(6, 5, "Maximus"); //replace 5 char's, starting at index 6.  Output:  Nimit Maximus.  
  cout << yourName << endl; 
  
  return 0;

}
