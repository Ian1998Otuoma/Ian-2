#include <iostream>

using namespace std;

int main() {
    string movieType;
    int age;
    double ticketPrice = 10;

    cout << "Enter movie type (regular or 3D): ";
    cin >> movieType;

    cout << "Enter customer age: ";
    cin >> age;

    if (movieType == "regular") {
        if (age >= 65) {
            ticketPrice = 5;
        } else if (age < 18) {
            ticketPrice = 8;
        } else {
            ticketPrice = 10;
        }
    } else if (movieType == "3D") {
        if (age >= 65) {
            ticketPrice = 7;
        } else if (age < 18) {
            ticketPrice = 12;
        } else {
            ticketPrice = 15;
        }
    } else {
        cout << "Invalid movie type." << endl;
    }

    cout << "Ticket price: $" << ticketPrice << endl;

    return 0;
}
