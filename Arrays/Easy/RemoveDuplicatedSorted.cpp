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
int RemoveDuplicated(int arr[],int arr1[],int size){
    int j = 0;
    for(int i =0;i<size-1;i++){
        if(arr[i]!=arr[i+1]){
            arr1[j]=arr[i];
            j++;
        }
    }
    arr1[j] = arr[size-1];
    j++;
    return j;
}


int main (){
    int arr[] = {1,1,2,2,3,3,3,4,4,5};
    int size = sizeof(arr)/sizeof(int);
    int arr1[size];
    int newSize = RemoveDuplicated(arr, arr1, size);
    PrintArray(arr1,newSize);
    
    cout<<endl;
    return 0;

}