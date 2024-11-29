#include <iostream>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    // Method to get person details (no virtual keyword here)
    getDetails() {
        cout << "Name: " << name << ", Age: " << age;
    }
};

// Derived class Student, inheriting from Person
class Student : public Person {
private:
    string student_id;

public:
    // Constructor to initialize name, age, and student_id
    Student(string n, int a, string id) : Person(n, a), student_id(id) {}

    // Override the getDetails method to include student-specific info
    getDetails() {
        Person::getDetails(); // Call the base class method
        cout << ", Student ID: " << student_id << endl;
    }
};

// Derived class Teacher, inheriting from Person
class Teacher : public Person {
private:
    string subject;

public:
    // Constructor to initialize name, age, and subject
    Teacher(string n, int a, string sub) : Person(n, a), subject(sub) {}

    // Override the getDetails method to include teacher-specific info
    getDetails() {
        Person::getDetails(); // Call the base class method
        cout << ", Subject: " << subject << endl;
    }
};

main() {
    // Creating instances of Student and Teacher
    Student student("Alice", 20, "S12345");
    Teacher teacher("Mr. Smith", 40, "Mathematics");

    // Printing details of both instances
    cout << "Student Details:" << endl;
    student.getDetails();  // Calls Student's getDetails

    cout << "\nTeacher Details:" << endl;
    teacher.getDetails();  // Calls Teacher's getDetails

}

