#include <iostream>

using namespace std;

int main() {
  string fullName;
  string course;
  int score;

  cout << "Enter student full name: ";
  cin >> fullName;

  cout << "Enter course name: ";
  cin >> course;

  cout << "Enter student score: ";
  cin >> score;

  switch (score) {
    case 70 ... 100:
      cout << "Student Full Name: " << fullName << endl;
      cout << "Course: " << course << endl;
      cout << "Grade: A" << endl;
      break;
    case 60 ... 69:
      cout << "Student Full Name: " << fullName << endl;
      cout << "Course: " << course << endl;
      cout << "Grade: B" << endl;
      break;
    case 50 ... 59:
      cout << "Student Full Name: " << fullName << endl;
      cout << "Course: " << course << endl;
      cout << "Grade: C" << endl;
      break;
    case 40 ... 49:
      cout << "Student Full Name: " << fullName << endl;
      cout << "Course: " << course << endl;
      cout << "Grade: D" << endl;
      break;
    default:
      cout << "Student Full Name: " << fullName << endl;
      cout << "Course: " << course << endl;
      cout << "Grade: F" << endl;
  }

  return 0;
}
