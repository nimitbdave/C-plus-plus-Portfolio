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
  
  string steveQuote = "A day without sunshine is like, you know, night";
  
  //create a file/fxn if it doesn't exist.  
  ofstream writer("stevequote.txt")
  
  //verify that the file stream was created, so that I can write to the file.  If not, then error message.
  if (! writer){
    cout << "Error opening file" << endl; //Error if not created.  
    return -1; //signal an error has occurred.  
  } else {      //if filestream is open, that means we can write to the file.  
    writer << steveQuote << endl;   // call "writer", then the string, then endline.  
    writer.close();   //importantly, close the file stream at the end.  
  }
  
  //To read from the file stream:
  //create a new one, since closed on line 31.  
  ofstream writer2("stevequote.txt", ios::app); 
  //define that we want to write to the stevequote file, and then append to what's already there.
  
  // Open a stream to append to what's there with ios::app
  // ios::binary : Treat the file as binary 
  // ios::in : Open a file to read input 
  // ios::trunc : Default, what happens when you don't use an appellated symbol like "binary" or "in"
  // ios::out : Open a file to write output
  
  //In this situation, we will be appending.  
  //Check that file stream is already open.  
  if (! writer2){
    cout << "Error opening file" << endl; //Error if not created.  
    return -1; //signal an error has occurred.  
  } else {      //To append.  If filestream is open, that means we can write to the file.  
    writer2 << "\n -Steve Martin" << endl;   // call "writer2", then the string, then endline.  
    writer2.close();   //importantly, close the file stream at the end.  
  }  
    //Okay, we wrote, and then appended, and then created the file.
    //Now, going to create the character which is going to hold each of the individual characters
    //which we are going to read from our file.  
  char letter; 
  //going to read these characters from an input filestream.  
  ifstream reader("stevequote.txt");
  //going to check if that stream is going to be open, like before.  Include error msg.  
  if(! reader){
    cout << "Error opening file" << endl; //Error if not created.  
    return -1; //signal an error has occurred. 
  } else {  //else we know that we got our stream open and will be able to read from that file
    //going to use a for-loop in this situation to read each character from the stream 
    //until we get to the end of the line.  
    for(int i = 0; ! reader.eof(); i++){  //! reader.oef means "while reader does not get to the end of the file, the loop should run"
      reader.get(letter); //call reader.get to get the next letter of output that we want.  
      cout << letter; //then we want to print that out to the screen.  
    }
    //once for-loop is all done, 
    cout << endl; 
    reader.close();   //close the reader.  
  }
  
  return 0;

}
