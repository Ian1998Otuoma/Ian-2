#include <iostream>

using namespace std;

int main() {
  string bookType;
  int daysLate;
  double lateFee = 500;

  cout << "Enter type of book (regular, children's, reference): ";
  cin >> bookType;

  cout << "Enter number of days late: ";
  cin >> daysLate;

  if (bookType == "regular") {
    lateFee = 1 * daysLate;
  } else if (bookType == "children's") {
    lateFee = 2 * daysLate;
  } else if (bookType == "reference") {
    lateFee = 3 * daysLate;
  } else {
    cout << "Invalid book type." << endl;
  }

  cout << "Late fee: $" << lateFee << endl;

  return 0;
}
