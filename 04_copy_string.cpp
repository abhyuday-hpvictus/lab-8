#include <iostream>
#include <string>
using namespace std;

void copyString(string source, string &destination) {
    destination = source;
}

int main() {
    string source, destination;
    getline(cin, source);
    copyString(source, destination);
    cout << destination;
    return 0;
}
