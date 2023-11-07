#include <iostream>

using namespace std;

int main() {
  double purchaseAmount, discountedAmount;

  cout << "Enter purchase amount: ";
  cin >> purchaseAmount;

  if (purchaseAmount >= 500) {
    discountedAmount = purchaseAmount * 10;
  } else if (purchaseAmount >= 200) {
    discountedAmount = purchaseAmount * 5;
  } else {
    discountedAmount = 0;
  }

  cout << "Discounted amount" << discountedAmount << endl;
  cout << "Total cost" << purchaseAmount - discountedAmount << endl;

  return 0;
}
