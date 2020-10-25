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
  
  const double PI = 3.1415926535;
  
  char myGrade = 'A';
  
  bool isHappy = true;
  
  int myAge = 16;
  
  float favNum = 3.14159;
  
  double otherFavNum = 1.6180339887; // Golden Ratio = (1 + √5)/2
  
  //Arithmetic Manipulations:  +, -, *, /, %, ++, --, 
 
  cout << "5 + 2 = " << 5 + 2 << endl;
  cout << "5 - 2 = " << 5 - 2 << endl;
  cout << "5 * 2 = " << 5 * 2 << endl;
  cout << "5 / 2 = " << 5 / 2 << endl;
  cout << "5 % 2 = " << 5 % 2 << endl;
  
  int five = 5;
  
  cout << "5++ = " << five++ << endl;   //5     Increment AFTER  (value = 6 after endl)
  cout << "++5 = " << ++five << endl;   //7     Increment BEFORE ( 6 + 1 = 7 )
  cout << "5-- = " << five-- << endl;   //7     Decrement AFTER  (value = 6 after endl)
  cout << "--5 = " << --five << endl;   //5     Decrement BEFORE ( 6 - 1 = 5 )
  
  
  //Shorthand 
  
  five += 6; five = five + 6;  
  
  // Order of Operations 
  
  cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;      // -3
  cout << "(1 + 2 - 3) * 2 = " << (1 + 2 -3) * 2 << endl;   // 0
  
  // Casting
  cout << "4 / 5 = " << 4 / 5 << endl;                      // 4/5 = 0  (???)
  cout << "4 / 5 = " << (float) 4 / 5 << endl;              // 4/5 = 0.8  (correct)
                                                            // options: (char), (int), (float)
  
  
  
  
  //Qualifiers
  // ==, !=, >, <, >=, <=
  // &&, ||, !    // and, or, not
  
  // CAN SOMEONE DRIVE Y/N?
  int age = 70;
  int ageAtLastExam = 16;
  bool isNotIntoxicated = true; 
  
  if((age >= 1) && (age < 16)){
  
    cout << "You can't drive" << endl;
  
  } else if(! isNotIntoxicated){  // Not-Not-Intoxicated = Intoxicated
  
    cout << "You can't drive" << endl;
  
  } else if( age >= 80 && ((age > 100 || ((age - ageAtLastExam) > 5)) ){  //If person is over 100, can't drive.  If over age 80, required to take an exam.
  
    cout << "You can't drive" << endl;
  
  } else {
  
    cout << "You can drive" << endl;
    
  }
  
  return 0;

}
