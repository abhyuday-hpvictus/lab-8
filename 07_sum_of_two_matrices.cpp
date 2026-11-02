#include <iostream>
using namespace std;

void addMatrices(int first[][10], int second[][10], int result[][10], int rows, int columns) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            result[i][j] = first[i][j] + second[i][j];
}

int main() {
    int rows, columns;
    int first[10][10], second[10][10], result[10][10];
    cin >> rows >> columns;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> first[i][j];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            cin >> second[i][j];
    addMatrices(first, second, result, rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << result[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
