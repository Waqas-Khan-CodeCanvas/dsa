// #include<iostream>
// using namespace std;

// // void bubbleSort(int data[], int N){
// //     for (int i = 1; i < N; i++){
// //         for (int j = 0; j < N-1-i; j++){
// //             if(data[j] > data[j+1]){
// //                 int temp = data[j];
// //                 data[j] = data[j+1];
// //                 data[i+1] = temp;
// //             }
// //         }   
// //     }   
// // }

// int main(){
//     int arr[5]= {2,1,5,3,4};
//     bubbleSort(arr,5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    bubbleSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
