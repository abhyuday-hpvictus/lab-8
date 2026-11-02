#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(const string &sentence) {
    stringstream stream(sentence);
    string word;
    int count = 0;
    while (stream >> word) count++;
    return count;
}

int main() {
    string sentence;
    getline(cin, sentence);
    cout << countWords(sentence);
    return 0;
}
