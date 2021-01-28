// a. Michael Bertagna
// b. 2353491
// c. bertagna@chapman.edu
// d. CPSC 298-01
// e. Assignment 2

/*conversion.cpp is a simple program which gather a length in feet and
inches from the user and converts/outputs the length in both meters and
centimeters, respectively*/

// Write a program that will read in a length in feet and inches and
// output the equivalent length in meters and centimeters. Use at least
// three functions: one for user input, one or more for calculating, and
// one for output(console). Include a loop that lets the user repeat this
// computation for new input values until the user says he or she wants to
// end the program(user has to type exit).There are 0.3048 meters in a foot,
// 100 centimeters in a meter, and 12 inches in a foot.

#include <iostream>
#include <string>

using namespace std;

double inputImperialToFt(){
  double ft;
  double in;
  cout << "Feet: ";
  cin >> ft;
  cout << "Inches: ";
  cin >> in;
  return ft + in / 12;
}

double FtToMeters(double feet){
  return feet * 0.3048;
}

double metersToCm(double meters){
  return meters * 100;
}

void outputMandCm(){
  double inches = inputImperialToFt();
  double m = FtToMeters(inches);
  double cm = metersToCm(m);
  cout << "Inputted length in meters: " << m << endl;
  cout << "Inputted length in centimeters: " << cm << endl;
}

int main (int argc, char **argv){
  string sent = "";
  while (sent != "exit"){
    outputMandCm();
    cout << "To exit, input exit." << endl;
    cout << "Input anything else to continue converting." << endl;
    cin >> sent;
  }
  return 0;
}
