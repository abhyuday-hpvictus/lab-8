#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int roll_no;
    float marks;

public:
    void input() {
        getline(cin >> ws, name);
        cin >> roll_no >> marks;
    }

    void display() const {
        cout << name << '\n' << roll_no << '\n' << marks;
    }
};

int main() {
    Student student;
    student.input();
    student.display();
    return 0;
}
