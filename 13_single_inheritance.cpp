#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        getline(cin >> ws, name);
        cin >> age;
    }

    void displayPerson() const {
        cout << name << '\n' << age << '\n';
    }
};

class Student : public Person {
private:
    float marks;

public:
    void inputStudent() {
        inputPerson();
        cin >> marks;
    }

    void displayStudent() const {
        displayPerson();
        cout << marks;
    }
};

int main() {
    Student student;
    student.inputStudent();
    student.displayStudent();
    return 0;
}
