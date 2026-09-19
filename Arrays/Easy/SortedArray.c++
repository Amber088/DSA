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
void SortedArray (int arr[],int size){
    for(int i =0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Unsorted Array";
            return;
        }
    }
    cout<<"Sorted Array";
}


int main (){
    int arr[] = {1,2,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    SortedArray(arr, size);
    cout<<endl;
    return 0;

}