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

//NOTE: NOT VIRTUAL
class Dog : public Animal {
  public:
    void makeSound() { cout << "The Dog says woof" << endl; }
};


class Cat : public Animal {
  public: 
    void makeSound() { cout << "The Cat says meow" << endl; }
};

//Abstract Data type.  
class Car{
  public: 
    virtual int getNumWheels() = 0;
    virtual int getNumDoors() = 0; 
};

//Create stationwagon class, which inherits from Car.  
class StationWagon : public Car {
  public: 
    int getNumWheels(){ cout << "Station wagon has 4 wheels" << endl; }
    int getNumDoors() { cout << "Station wagon has 4 doors" << endl; }
    StationWagon() {} //Empty constructor
    ~StationWagon();  //Destructor

int main() {
  
  Animal* pCat = new Cat;   //make a new animal, cat
  Animal* pDog = new Dog;   //make a new animal, dog
  
  pCat -> makeSound(); 
  pDog -> makeSound(); 
  
  Car* stationWagon = new StationWagon(); //create a stationwagon of type car, then create new s.wagon
  
  stationWagon -> getNumWheels(); //even though it is a car object, getNumWheels() works.  
    
  /* Output:  
  The Cat says meow
  The Dog says woof
  Station wagon has 4 wheels 
  */
  
  return 0;

}
