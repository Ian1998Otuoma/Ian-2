#include <iostream>

using namespace std;

int main() 
{
  double accountBalance = 1000;
  double dailyWithdrawalLimit = 500;

  double withdrawalAmount;

  cout << "Enter withdrawal amount: ";
  cin >> withdrawalAmount;

  if (withdrawalAmount > accountBalance) {
    cout << "Insufficient funds." << endl;
  } else if (withdrawalAmount > dailyWithdrawalLimit) {
    cout << "Withdrawal amount exceeds daily limit." << endl;
  } else {
    accountBalance -= withdrawalAmount;
    cout << "Withdrawal successful. New account balance: $" << accountBalance << endl;
  }

  return 0;
}
