#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++){
        if (arr[i] == target){
            return i;
        }
    } 
    return -1;
}

int main(){
    int size = 10;
    int arr[size]= {1,2,3,4,5,6,7,8,9};
    int target = 60;

    cout<<linearSearch(arr,size,target);
}