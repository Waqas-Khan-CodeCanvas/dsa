#include<iostream>
using namespace std;
void selectionSort(int data[], int N){
   for (int i = 0; i < N -1; i++)
   {
    for (int j = 0; j < N-1-i; j++)
    {
        if(data[j]> data[j+1]){
            int temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
        }
    }
    
   }
   

      
    
}

int main(){
    int arr[5]={5,2,1,3,4};
    selectionSort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}