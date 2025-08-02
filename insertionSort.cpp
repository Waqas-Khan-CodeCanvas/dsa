#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];         // Current element to insert
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift element to the right
            j--;
        }
        arr[j + 1] = key;         // Insert the key at the right position
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Example usage
int main() {
    int arr[] = {9, 5, 1, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    insertionSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
