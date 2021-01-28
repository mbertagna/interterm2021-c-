// a. Michael Bertagna
// b. 2353491
// c. bertagna@chapman.edu
// d. CPSC 298-01
// e. Assignment 2

/*salestax.cpp is a simple program to facilitate the functionality of addTax
which has two formal parameters:
taxRate(float), which is the amount of sales tax expressed as a percent;
and cost(float), which is the cost of an item before tax.
The function returns the value(float)of cost so that it includes sales tax */

#include <iostream>

using namespace std;

//addTax takes in floats, cost and taxRate, and calculates/returns cost with tax
float addTax(float taxRate, float cost){
  float costWithTax = (cost * (1+(taxRate/100)));//calculate cost with tax
  return costWithTax;
}

//main used to display functionality of addTax
int main (int argc, char **argv){

  float sampleCost = 143.48;
  float percentTax = 5.3;

  //print cost with tax accounted for
  cout << "Cost with tax: " << addTax(percentTax, sampleCost) << endl;
  return 0;
}
