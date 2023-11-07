
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

  if (score >= 70) {
    cout << "Student Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: A" << endl;
  } else if (score >= 60 && score <= 69) {
    cout << "Student Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: B" << endl;
  } else if (score >= 50 && score <= 59) {
    cout << "Student Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: C" << endl;
  } else if (score >= 40 && score <= 49) {
    cout << "Student Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: D" << endl;
  } else {
    cout << "Student Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: F" << endl;
  }

  return 0;
}
