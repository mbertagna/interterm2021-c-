// a. Michael Bertagna
// b. 2353491
// c. bertagna@chapman.edu
// d. CPSC 298-01
// e. Assignment 1

/*employeepay.cpp is a simple program which reads in the number of hours worked in a week as input
and outputs the worker’s gross pay, each withholding amount, and the net take-home pay for the week*/

#include <iostream>

using namespace std;

int main (int argc, char **argv){
  double numWorkHours;
  double numOvertimeHours;

  cout << "Regular Hours Worked: ";
  cin >> numWorkHours;//get number of regular work hours from user
  cout << "Overtime Hours Worked: ";
  cin >> numOvertimeHours;//get number of overtime hours from user

  double totalPay = 16 * numWorkHours + 1.5 * 16 * numOvertimeHours;//calculate total/gross pay

  double ssTax = 0.06 * totalPay;//calculate Social Security tax
  double fedIncomeTax = 0.14 * totalPay;//calculate federal income tax
  double stateIncomeTax = 0.05 * totalPay;//calculate state income tax
  double medInsurance = 10.0;//medical insurance payment always $10

  //print gross pay, each withholding amount, and the net take-home pay for the week
  cout << "Gross Pay: " << totalPay << endl;
  cout << "Social Security Tax: " << ssTax << endl;
  cout << "Federal Income Tax: " << fedIncomeTax << endl;
  cout << "State Income Tax: " << stateIncomeTax << endl;
  cout << "Medical Insurance Payment: " << medInsurance << endl;
  cout << "Net Pay: " << totalPay - (ssTax + fedIncomeTax + stateIncomeTax + medInsurance) << endl;

  return 0;

}
