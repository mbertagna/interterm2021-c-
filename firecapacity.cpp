// a. Michael Bertagna
// b. 2353491
// c. bertagna@chapman.edu
// d. CPSC 298-01
// e. Assignment 1

/*firecapacity.cpp is a simple program which determines whether a meeting
room is in violation of fire law regulations regarding the maximum room capacity*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
  int maxRoomCap;
  int attendanceNum;

  cout << "Maximum Room Capacity: ";
  cin >> maxRoomCap;//get max room capacity from user
  
  cout << "Number of People Attending Meeting:  ";
  cin >> attendanceNum;//get attendence number from user

  if (attendanceNum <= maxRoomCap){//if legal, let user know and print max room capacity
    cout << "It is legal to hold the meeting based on fire regulation."
    << "\nMaximum Legal Attendence: " << maxRoomCap << endl;
  }
  else{//else, if illegal, let user know and print number of people that must be excluded for legal meeting
    cout << "The meeting cannot be held as planned due to fire regulations."
    << "\nNumber of people that need to be excluded for legal meeting: " <<
    attendanceNum - maxRoomCap << endl;
  }

  return 0;

}
