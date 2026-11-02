#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temporary = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temporary;
            }
        }
    }
}

int main() {
    int size;
    cin >> size;
    int array[100];
    for (int i = 0; i < size; i++) cin >> array[i];
    bubbleSort(array, size);
    for (int i = 0; i < size; i++) cout << array[i] << " ";
    return 0;
}
