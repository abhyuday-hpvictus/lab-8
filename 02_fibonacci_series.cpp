#include <iostream>
using namespace std;

void printFibonacci(int terms) {
    int first = 0, second = 1;
    for (int i = 0; i < terms; i++) {
        cout << first;
        if (i < terms - 1) cout << " ";
        int next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int terms;
    cin >> terms;
    printFibonacci(terms);
    return 0;
}
