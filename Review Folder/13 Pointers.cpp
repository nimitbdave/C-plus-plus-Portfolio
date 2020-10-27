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

//When data is stored, it is stored in an appropriately sized box that is based off of its data type 
//int, double, etc.  

  
//won't return anything, so void
void makeMeYoung (int*age){
  cout << "I used to be " << age* << endl;  //previous age. to get the value of age, *age.
  *age = 21;  //can change that value by using *age.  
}

int main() {
  
  int myAge = 39;
  char myGrade = 'A';
  
  cout << "Size of int " << sizeof(myAge) << endl;        //int takes up 4 bytes. 
  cout << "Size of char " << sizeof(myGrade) << endl;     //char takes up 1 byte.  
  
  //You can reference this box or memory address, where all of your data is stored, 
  //with the reference operator, &.  
  
  cout << "myAge is located at " << &myAge << endl;   // myAge is located at 0x7fff61de8948
  
  //When we change a value in a regular fxn, that change of value does not carry on.  
  //It is lost. 
  //When we use regular fxns, what we are doing is passing a value into that fxn.  
  //So even if we had...
  int sum = 5;
  addThese(sum);  
  //...if we changed the value of sum from 5 to something else, without passing it back, 
  //sum is still going to to be equal to 5, because we are passing a value.  
  
  //With reference operators, what we can do in general instead is pass-by-reference.  
  //And any change that is made inside of there is going to show.  
  //Now a pointer is going to be able to store a memory address.  
  
  int myAge = 28; 
  int* agePtr = &myAge; //Defining a pointer: same data type followed by *
                          //Use & to pass that over.  
  //Like before, we can access the memory address by using this pointer.                            
  cout << "Address of pointer " << agePtr << endl; 
  //But we will also be able to de-reference to get the data
  //at that memory address.  
  cout << "Data at memory address " << *agePtr << endl; 
  
  //Can also use pointers for arrays.  
  int badNums[5] = {4, 13, 14, 24, 34};  
  int* numArrayPtr = badNums; 
  
  //What is neat here is that we can simply increment through our array using shorthand notation
  //e.g., ++, --
  cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;   //0x7fff6b6e6910 Value 4
  
  numArrayPtr++; //To get the next value in our array.  
  
  cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;   //0x7fff6b6e6914 Value 13
                                                                            //Note the 4 bytes memory.
                                                                            //An int takes up 4 bytes.
  //An array name is just a pointer to its own array.  
  cout << "Address " << badNums << " Value " << *badNums << endl;   //0x7fff63605910 Value 4 (line 61)
  
  //Whenever we pass a variable to a function, we are passing by value.  
  //However, whenever we pass a pointer to a fxn, you are actually passing a reference 
  //which can be changed.  
  
  //call makeMeYoung()
  makeMeYoung(&myAge); 
  cout << "I'm " << myAge << " years old now".  //I'm 21 years old now.  
  int& ageRef = myAge; 
  cout << "myAge : " << myAge << endl;          //myAge : 21
  //can take this reference and increment it.  
  ageRef++; 
  cout << "myAge : " << myAge << endl;          //myAge : 22  
  //changed globally 
  
  //New fxn, actYourAge.
  //To pass the reference, and show the difference between 
  //passing that reference and dealing with pointers.  
  
  
  
  return 0;

}
