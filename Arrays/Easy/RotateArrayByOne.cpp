#include <stdio.h>
#include <iostream>
#include<climits>
using namespace std;
void PrintArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

}
void RotateArrayByOne(int arr[],int size){
     int first = arr[0];
    for (int i =0;i<size-1;i++){
        arr[i] = arr[i + 1];
    }  
    arr[size - 1] = first;
}
int main (){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Original array : ";
    PrintArray(arr,size);
    cout<<endl;
    cout<<"After one rotation  : ";
    RotateArrayByOne(arr,size);
    PrintArray(arr,size);
    cout<<endl;
    return 0;

}