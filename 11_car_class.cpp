#include <iostream>
#include <string>
using namespace std;

class Car {
    string brand;
    double price;

public:
    void input() {
        getline(cin >> ws, brand);
        cin >> price;
    }

    void display() const {
        cout << brand << " " << price << '\n';
    }
};

int main() {
    int count;
    cin >> count;
    Car cars[100];
    for (int i = 0; i < count; i++) cars[i].input();
    for (int i = 0; i < count; i++) cars[i].display();
    return 0;
}
