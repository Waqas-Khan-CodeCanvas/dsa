#include <iostream>
using namespace std;
void selectionSort(int data[],int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < N ; j++)
        {
            if (data[j] < data[min])
                min = j;
        }
        int temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}
int main()
{
    int arr[5]={3,4,5,1,2};
    selectionSort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}