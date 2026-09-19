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
int LargestElement (int arr[],int size){
    int max = INT_MIN;
    for (int i =0;i<size;i++){
        if (arr[i]>max){
            max =arr[i];
        }
    }
    return max;
}

int main (){
    int arr[] = {2,4,0,3,7};
    int size = sizeof(arr)/sizeof(int);
    int MaxElement = LargestElement(arr,size);
    cout<<"Largest element in a given array is :"<<MaxElement;
    cout<<endl;
    return 0;

}