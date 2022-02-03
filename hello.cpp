#include "hello.h"
//including hello.h so this program can actually create the functions and constructors and destructors

//nothing happens here because we have no data to store in a variable or anything to print
HelloWorld::HelloWorld(){
  //nothing
}

//Destructor here, nothing to print to the terminal
HelloWorld::~HelloWorld(){
  //nothing
}

//Function printHelloWorld simply prints Hello World to terminal when called by something of HelloWorld object type.
void HelloWorld::printHelloWorld(){
  cout << "Hello World" << endl;
}
