#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int studentID;

public:
    void getStudentDetails() {
        getDetails(); // Call base class function
        cout << "Enter Student ID: ";
        cin >> studentID;
    }

    void showStudentDetails() {
        cout << "\n--- Student Details ---\n";
        showDetails(); // Call base class function
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void getTeacherDetails() {
        getDetails(); // Call base class function
        cout << "Enter subject taught: ";
        cin >> subject;
    }

    void showTeacherDetails() {
        cout << "\n--- Teacher Details ---\n";
        showDetails(); // Call base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create Student object
    Student s;
    s.getStudentDetails();
    s.showStudentDetails();

    // Create Teacher object
    Teacher t;
    t.getTeacherDetails();
    t.showTeacherDetails();

    return 0;
}
