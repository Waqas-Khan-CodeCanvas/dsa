#include <iostream>
using namespace std;

void retrieve(int arr[], int size, int index) {
    if (index >= 0 && index < size) {
        cout << "Element at index " << index << " is: " << arr[index] << endl;
    } else {
        cout << "Invalid index!" << endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 2;

    retrieve(arr, size, index);
    return 0;
}
