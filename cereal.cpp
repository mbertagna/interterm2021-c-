// a. Michael Bertagna
// b. 2353491
// c. bertagna@chapman.edu
// d. CPSC 298-01
// e. Assignment 1

/*cereal.cpp is a simple program which reads the weight of a breakfast cereal package in ounces
and outputs the weight in metric tons as well as the number of boxes needed to yield one metric ton of cereal.*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
  double cerealBoxWeightOz;
  const double OzInTon = 35273.92;//create constant holding amount of ounces in a ton

  cout << "Weight of Cereal Package(Ounces): ";
  cin >> cerealBoxWeightOz;//get cereal box weight in ounces from user

  cout << "Metric Ton Weight: " << cerealBoxWeightOz / OzInTon << endl;//print weight in metric tons
  cout << "Number of Cereal Boxes in a Metric Ton: " << OzInTon/cerealBoxWeightOz << endl;//print number of boxes in metric ton

  return 0;

}
