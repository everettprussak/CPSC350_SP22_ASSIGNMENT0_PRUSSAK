#include "hello.h"
//Including header file hello.h because that is where the Class HelloWorld was created

int main(int argc, char **argv){

  //Creating hello from object type HelloWorld (Default would be used here)
  HelloWorld hello;

  //Using our hello we just created, and using a function called printHelloWorld
  // This function will simply print "Hello World" to the terminal
  hello.printHelloWorld();

  return 0;
}
