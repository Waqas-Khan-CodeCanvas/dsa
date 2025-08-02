#include <iostream>
using namespace std;

void insert(int arr[], int &size, int value, int index, int capacity) {
    if (size >= capacity) {
        cout << "Array is full!" << endl;
        return;
    }

    if (index < 0 || index > size) {
        cout << "Invalid index!" << endl;
        return;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    size++;

    cout << "After insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int value = 25;
    int index = 2;

    insert(arr, size, value, index, 10);
    return 0;
}
