#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    double radius, length, width;
    cin >> radius >> length >> width;
    Circle circle(radius);
    Rectangle rectangle(length, width);
    cout << circle.area() << '\n' << rectangle.area();
    return 0;
}
