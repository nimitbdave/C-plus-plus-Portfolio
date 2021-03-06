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

//What makes an object an object?  
class Animal{
  // Attributes: height weight variables  //These attributes will be modeled in the variables.  
  // Capabilities : Run Eat functions / methods, 
  
  //encapsulation.  (for protection)
  //will have some of these things be private (only changeable by functions inside of my class).  
  private: 
    int height; 
    int weight; 
    string name; 
    
    //static means this will be shared by every object of type Animal that is ever created. 
    //generally attributes that the class object (Animal) would not have.  
    //doesn't make sense that an Animal can count.  
    //Want to count the number of animals, but do not want the Animal type to be able to do it.  
    static int numOfAnimals; //i want to keep track of the number of animals created in my class.  
  
  
  /also encapsulation, keeping data protected.  
  public:  //need public methods to be able to access the values inside of there.  
    int getHeight()   { return height; }  //whenever this is called, it is going to return whatever value
                                        //is stored for my animal object to whoever calls for it.  
    int getWeight()   { return weight; }   
    string getName()  { return name; }
    void setHeight(int cm)  { height = cm; } //Only want them to enter a reasonable height.  
    void setWeight(int kg)  { weight = kg; }
    void setName(int animalName)    { height = animalName; }
    
    void setAll(int, int, string); //declare a prototype
    Animal(int, int, string); //constructor, name starts with the class's name.  
                              //this is the fxn which will be called whenever an object is created. 
    ~Animal() //destructor [needed if there's a constructor]
    
    //prototype 
    Animal(); //another constructor which doesn't receive anything.  
              //OVERLOADING.  Name can be the same, but attributes need to be different.  
              //Anything marked as protected will be available to the same Class, 
              //as well as subclasses, but nothing else.  
    
    //define a STATIC METHOD
    //set aside bc they are attached to the Class, and not to the object.  
    //this method will return the number of animals that are created.  
    static int getNumOfAnimals() { return numOfAnimals; }  //no prototype, just do what it does.  
    void toString();  //will print out all the information we have on the animals.  
};

int Animal::numOfAnimals = 0;   //Our static number of animals, and how we refer to static variables
                                //as with the class name (Animal) followed by 2 colons (::)
                                //and then its name (numOfAnimals).  
                                //It's tied to the class.  It has nothing to do with the object itself.  

//We could then define setAll, since above is just the prototype method.    
void Animal::setAll(int height, int weight, string name){    
        //Define exactly what is being passed in here.
        //height, weight, name
        //To refer to an object's specific height 
        //and not just a generic type of height 
        //you put "this" inside here.  
        //The reason we have to do that is because
        //whenever the Class is created there are no animal objects created,
        //so if we want to refer to the specific animal objects's value/version of height
        //we need to put "this" in front of it.  
  this -> height = height; 
  //Do same thing for weight and name.  
  this -> weight = weight; 
  this -> name = name; 
  //Can also change that static variable, using ++.   
  Animal::numOfAnimal++;    
}    

//Once again, going to do this with a constructor, as well.  
//A constructor is called every single time an animal object is created.  
Animal::Animal(int height, int weight, string name){
  this -> height = height;   
  this -> weight = weight; 
  this -> name = name; 
  Animal::numOfAnimal++;
  //Therefore, setAll does the same thing that the constructor does.  
  //So, no need to keep lines 70-87, setAll constructor.  
}
                              
int main() {
  
  
  
  
  
  
  return 0;

}
