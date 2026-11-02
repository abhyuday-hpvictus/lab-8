#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int first, int second) {
        return first + second;
    }

    double add(double first, double second) {
        return first + second;
    }
};

int main() {
    Calculator calculator;
    int firstInteger, secondInteger;
    double firstDouble, secondDouble;
    cin >> firstInteger >> secondInteger;
    cin >> firstDouble >> secondDouble;
    cout << calculator.add(firstInteger, secondInteger) << '\n';
    cout << calculator.add(firstDouble, secondDouble);
    return 0;
}
