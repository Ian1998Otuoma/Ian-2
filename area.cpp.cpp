#include <iostream>

using namespace std;

int main() {
  int choice;
  float radius, length, breadth, height;

  cout << "Main Menu" << endl;
  cout << "1. Calculate the area of a circle" << endl;
  cout << "2. Calculate the area of a rectangle" << endl;
  cout << "3. Calculate the area of a triangle" << endl;
  cout << "4. Quit" << endl;

  cout << "Enter your choice: ";
  cin >> choice;

  switch (choice) {
    case 1:
      cout << "Enter radius of the circle: ";
      cin >> radius;
      cout << "Area of the circle: " << 3.14159 * radius * radius << endl;
      break;
    case 2:
      cout << "Enter length of the rectangle: ";
      cin >> length;
      cout << "Enter breadth of the rectangle: ";
      cin >> breadth;
      cout << "Area of the rectangle: " << length * breadth << endl;
      break;
    case 3:
      cout << "Enter base of the triangle: ";
      cin >> length;
      cout << "Enter height of the triangle: ";
      cin >> height;
      cout << "Area of the triangle: " << 0.5 * length * height << endl;
      break;
    case 4:
      cout << "Thank you for using the area calculator." << endl;
      break;
    default:
      cout << "Invalid choice." << endl;
  }

  return 0;
}
