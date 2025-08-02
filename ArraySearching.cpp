#include <iostream>
using namespace std;

void search(int arr[], int size, int value) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            cout << "Element " << value << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << value << " not found." << endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 30;

    search(arr, size, value);
    return 0;
}
