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

//refer to family of objects (getFamily())
//Basically, we mark a Method as Virtual when know that an Animal in this situation will be a 
//base class that may have this method overwritten by a subclass.  
  
class Animal{
  public:
    void getFamily() { cout << "We are animals" << endl; }
    
    virtual void getClass() { cout << "I'm an Animal" << endl; } //These are all in the Family of Animal 
                                                                // but the specific class for this 
                                                                // is Animal in this situation.
};

//Create a subclass called Dog, of type Animal, where it is going to inherit from Animal.
//Type Public because of course it inherits everything.
class Dog : public Animal {
  public:    
    getClass() { cout  << "I'm a Dog" << endl; }
    //Now can go in Main and create an Animal class.  
};


//Create a new class (GermanShepherd) of type (Dog)
//And then overwrite getClass with "I'm a German Shepherd".  
class GermanShepherd : public Dog { 
  public: 
    void getClass() { cout << "I'm a German Shepherd" << endl; }   
    void getDerived() { cout << "I'm an Animal and Dog" << endl; }
};


void whatClassAreYou(Animal *animal){
  
  animal -> getClass();  //would think that we would get exactly the same result as in Main, but... 

}

int main() {
  
  //Create an Animal class.  
  Animal *animal = new Animal; 
  Dog *dog = new Dog;
  //Won't matter if they are marked as Virtual or not, 
  //because these are both references to dogs as we can see here.  
  //Therefore... can simply: 
  animal -> getClass();
  dog -> getClass();  //Here I got the Virtual part off of that.  
  
  /* Output:  
  I'm an Animal
  I'm a Dog
  */
  
  //However, if I call getClass from a fxn, will encounter some problems.  cf., void whatClass
  
  whatClassAreYou(animal);
  whatClassAreYou(dog);
  
  /* Output:  
  I'm an Animal
  I'm a Dog
  I'm an Animal
  I'm an Animal 
  */
  
  //Instead what happens is that I'm an Animal gets passed both times.   
  //To get the proper getClass of both dog and animal, all we need to do is type in: 
  //[virtual] void getClass() { cout << "I'm an Animal" << endl; }
  //Meaning, by adding virtual, we EXPECT { cout << "I'm an Animal" << endl; } to CHANGE, so...
  
  /*
  class Animal{
  public:
    void getFamily() { cout << "We are animals" << endl; }
    
    virtual void getClass() { cout << "I'm an Animal" << endl; } //These are all in the Family of Animal 
                                                                // but the specific class for this 
                                                                // is Animal in this situation.
  };
  */
  
  //telling the machine that if you get a Dog, whether it's an animal or not
  //why don't you go and take a chance and check if the getClass() resides in the 
  //Dog Class or Dog Object.  
  
  //(class Dog : public Animal {
  //      public:    
  //        getClass() { cout  << "I'm a Dog" << endl; }
  //       //Now can go in Main and create an Animal class.  
  //    };
  
  //Here, you will see that everything prints out exactly the right way.  
  /* Output:  
  I'm an Animal
  I'm a Dog
  I'm an Animal
  I'm a Dog 
  */
  
  //Let's create a couple more classes above, now.  GermanShepherd.  
  //Polymorphism just means that whenever an animal is passed in, like it did in 
  
  /*
  void whatClassAreYou(Animal *animal){
  
    animal -> getClass();  //would think that we would get exactly the same result as in Main, but... 

  }
  */
  
  //... where we passed in an animal object (*animal),
  //It's AUTOMATICALLY going to find the right method to call.  That's all polymorphism is.  
  //Let's create a dog object.  
  Dog spot; 
  //Let's create a German Shepherd named Max.  
  GermanShepherd max; 
  //Base class can also call derived class methods as long as they exist in the base class.
  //So, we will call a pointer to the dog, and to get a reference to spot will will put &.  
  Animal* ptrDog = &spot; 
  Animal* ptrGShepherd = &max; //This is pointed to the GermanShepherd, with a reference &max.  
  
  //We can now call the method which was NOT overridden by other classes.  
  //getFamily() is the same in Animal.
  //getClass() WAS overridden.  Kept for comparison.  
  ptrDog -> getFamily();
  ptrDog -> getClass(); 
  
  
  /* Output:  
  I'm an Animal
  I'm a Dog
  I'm an Animal
  I'm a Dog 
  We are Animals  
  I'm a Dog         
  */
  
  //We are dogs   -> Could call this (ptrDog -> getFamily();) properly.  
  //I'm a Dog       //This is a reference to (Dog Spot;). 
  //We are Animals  -> We could call the specific Class, 
  //because this was listed as an Animal* i.e., (Animal* ptrDog = &spot;)
  //Also we were able to call the very specific Class which resides in Dog
  // i.e., ( ptrDog -> getClass() ) 
  // even though these were listed as Animals.  (Animal* ptrGShepherd = &max;)  
  // which is another example of polymorphism. 
  
  //We can also call the Superclass of German Shepherd.  (ptrGShepard)
  //bc everything is inherited.  So we can call getFamily (ptrGShepherd -> getFamily();) 
  //which resides in the Animal class.  
  //And, of course, we can also call the overwritten German Shepherd version.
  //( ptrGShepherd -> getClass(); ) 
  // And it's automatically going to go and get the right thing , as we can see in output.  
  
  ptrGShepherd -> getFamily(); 
  ptrGShepherd -> getClass(); 
  
  
  /* Output:  
  I'm an Animal
  I'm a Dog
  I'm an Animal
  I'm a Dog 
  We are Animals  
  I'm a Dog    
  We are Animals
  I'm a German Shepherd
  */
  
  //To get polymorphism 100% in your head, we can now created another animal object.  
  
  return 0;

}
