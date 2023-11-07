/******************************************************************************

                              

#include <iostream>

using namespace std;

int main() {
  int age;
  double bankBalance;
  string crbStatus;
  int customerDurationInMonths;

  cout << "Enter customer age: ";
  cin >> age;

  cout << "Enter customer bank balance: ";
  cin >> bankBalance;

  cout << "Enter customer CRB status (good or bad): ";
  cin >> crbStatus;

  cout << "Enter customer duration in months: ";
  cin >> customerDurationInMonths;

  if (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerDurationInMonths > 6) {
    cout << "Customer is qualified for a loan." << endl;
  } else {
    cout << "Customer is not qualified for a loan." << endl;
  }

  return 0;
}
