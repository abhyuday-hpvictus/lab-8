#include <iostream>
using namespace std;

int diagonalSum(int matrix[][10], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += matrix[i][i];
    return sum;
}

int main() {
    int size, matrix[10][10];
    cin >> size;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];
    cout << diagonalSum(matrix, size);
    return 0;
}
