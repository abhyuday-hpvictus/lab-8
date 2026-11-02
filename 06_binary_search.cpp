#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (array[middle] == target) return middle;
        if (array[middle] < target)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
}

int main() {
    int size, target;
    cin >> size;
    int array[100];
    for (int i = 0; i < size; i++) cin >> array[i];
    cin >> target;
    int position = binarySearch(array, size, target);
    if (position == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << position;
    return 0;
}
