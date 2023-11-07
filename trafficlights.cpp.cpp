#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
  while (true) {
    cout << "Red Light" << endl;
    this_thread::sleep_for(chrono::seconds(5));

    cout << "Yellow Light" << endl;
    this_thread::sleep_for(chrono::seconds(2));

    cout << "Green Light" << endl;
    this_thread::sleep_for(chrono::seconds(5));
  }

  return 0;
}
