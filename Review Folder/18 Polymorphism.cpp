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

//We will use a virtual method because we are going to override it and treat them as animals.
class Animal { 
  public: 
    virtual void makeSound() { cout << "The Animal says grr" << endl; }
                              
}; 

class Dog : public Animal {
  public:
    
};

class Cat : public Animal {
  public: 
  
};
      
int main() {
  
  
  
  
  
  
  return 0;

}
