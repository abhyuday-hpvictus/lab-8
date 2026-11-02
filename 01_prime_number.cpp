#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int divisor = 2; divisor * divisor <= number; divisor++) {
        if (number % divisor == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cin >> number;
    if (isPrime(number))
        cout << "Prime";
    else
        cout << "Not Prime";
    return 0;
}
