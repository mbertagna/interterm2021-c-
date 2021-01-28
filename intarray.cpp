// a. Michael Bertagna
// b. 2353491
// c. bertagna@chapman.edu
// d. CPSC 298-01
// e. Assignment 2

/*intarray.cpp is a simple program which reads up to ten nonnegative integers
into an array called numberArray and then  prints the integers*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
  int numArray[10] = {0,0,0,0,0,0,0,0,0,0};//initialize array
  int numInts = 0;//keeps track of number of ints

  cout << "Enter up to ten nonnegative integers." << endl;
  cout << "If you wish to input less than ten," << endl;
  cout << "enter a negative number or zero to stop inputting." << endl;

  //get postive integers from user
  for (int i = 0 ; i < 10 ; ++i){
    cout << "Integer number " << i+1 << ": ";
    cin >> numArray[i];
    if (numArray[i] <= 0){//break loop if input <= 0
      break;
    }
    else{//else, add 1 to num count
      ++numInts;
    }
  }

  //print each positive integer user inputted
  for (int i = 0 ; i < numInts ; ++i){
    cout << numArray[i] << endl;
  }

  return 0;
}
