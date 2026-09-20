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
void MoveZeroes(int arr[],int size){
    int j =0;
    for(int i = 0;i<size;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main (){
    int arr[] = {0,1,0,3,12};
    int size = sizeof(arr)/sizeof(int);
    MoveZeroes(arr,size);
    PrintArray(arr,size);
    return 0;
}