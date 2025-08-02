#include<iostream>
using namespace std;
int main(){
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter a number for an array .";
        cin>>numbers[i];
    }
    int max = numbers[0];
    int min = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    cout<<"Maximum number :"<< max<<endl;
    cout<<"Manimum number :"<< min;
    
}