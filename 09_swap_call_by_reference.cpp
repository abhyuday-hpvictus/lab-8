#include <iostream>
using namespace std;

void swapNumbers(int &first, int &second) {
    int temporary = first;
    first = second;
    second = temporary;
}

int main() {
    int first, second;
    cin >> first >> second;
    swapNumbers(first, second);
    cout << first << " " << second;
    return 0;
}
