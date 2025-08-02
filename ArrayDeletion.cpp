#include <iostream>
using namespace std;

void deleteElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index!" << endl;
        return;
    }

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "After deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 2;

    deleteElement(arr, size, index);
    return 0;
}
