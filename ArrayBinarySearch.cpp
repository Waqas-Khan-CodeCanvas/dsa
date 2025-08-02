#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2; // Simpler version for beginners

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 35;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
