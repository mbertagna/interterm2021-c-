// a. Michael Bertagna
// b. 2353491
// c. bertagna@chapman.edu
// d. CPSC 298-01
// e. Assignment 2

/*zeroboth.cpp is a simple program to facilitate a function zeroBoth which
has two call-by-reference parameters, both of which are variables of type
int, and sets the values of both variables to 0*/

#include <iostream>

using namespace std;

//zeroBoth takes in two ints (passed by reference and sets each to 0)
void zeroBoth(int& num1, int& num2){//pass num1 and num2 by reference with &
  //set memory location values to 0
  num1 = 0;
  num2 = 0;
}

//main used to display functionality of zeroBoth
int main (int argc, char **argv){

  int int1 = 214544534;
  int int2 = -34952584;
  
  //print values before
  cout << "Integer 1 Before: " << int1 << "\nInteger 2 Before: " << int2 << endl;

  //pass in two non zero ints
  zeroBoth(int1,int2);

  //print values after
  cout << "Integer 1 After: " << int1 << "\nInteger 2 After: " << int2 << endl;
  return 0;
}
