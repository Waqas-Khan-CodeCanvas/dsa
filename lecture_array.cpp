#include<iostream>
using namespace std;
int main(){
    cout<<"hello world "<< endl;
    int size = 5;
    int arr[size];

    for (int i = 0; i < size; i++){
        cout<<"enter your values";
        cin >> arr[i];
    }
    // int smallest = INT16_MAX;
    // for (int i = 0; i < size; i++)
    // {
    //     smallest = min(arr[i],smallest);
    // }
    // cout<<smallest;
    
    int gratest = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        gratest = max(arr[i],gratest);
    }
    cout<<gratest;

    // int max = INT16_MIN;
    // for (int i = 0; i < size; i++){
    //     if (arr[i] > max)   
    //     {
    //         max =arr[i];
    //     }
    // }
    // cout<<"max value is : "<<max;    


    // int min = INT16_MAX;
    // for (int i = 0; i < size; i++){
    //     if (arr[i] < min)   
    //     {
    //         min =arr[i];
    //     }
    // }
    // cout<<"min value is : "<<min;   
    
    
    return 0;
    
    
}