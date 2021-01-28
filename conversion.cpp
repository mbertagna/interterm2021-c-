// a. Michael Bertagna
// b. 2353491
// c. bertagna@chapman.edu
// d. CPSC 298-01
// e. Assignment 2

/*conversion.cpp is a simple program which gather a length in feet and
inches from the user and converts/outputs the length in both meters and
centimeters, respectively*/

#include <iostream>
#include <string>

using namespace std;

// inputImperialToFt gets input from user (a length in ft and in)
// and returns a double in ft for the length
double inputImperialToFt(){
  double ft;
  double in;
  cout << "Feet: ";
  cin >> ft;//get ft from user
  cout << "Inches: ";
  cin >> in;//get in from user
  return ft + in / 12;//convert length to ft
}

// FtToMeters converts feet to meters and returns meter (double)
double FtToMeters(double feet){
  return feet * 0.3048;
}

//metersToCm converts meters to cm and return cm (double)
double metersToCm(double meters){
  return meters * 100;
}

//outputMandCm calls inputImperialToFt in order to get length
// from user in ft and in. Then, it converts and the length into
// m and cm and outputs the length in m and cm, respectively
void outputMandCm(){
  double inches = inputImperialToFt();
  double m = FtToMeters(inches);
  double cm = metersToCm(m);
  cout << "Inputted length in meters: " << m << endl;
  cout << "Inputted length in centimeters: " << cm << endl;
}

//main faciliates the running of above functions
int main (int argc, char **argv){
  string sent = "";
  //Loop runs outputMandCm to all user to use program.
  //Then, Prompts user asking if they would like to exit
  //Program run over and over until user enters exit
  while (sent != "exit"){
    outputMandCm();
    cout << "To exit, input exit." << endl;
    cout << "Input anything else to continue converting." << endl;
    cin >> sent;
  }
  return 0;
}
