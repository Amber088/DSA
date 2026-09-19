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
int SecondLargestElement (int arr[],int size){
    int largest = INT_MIN;
    int Second_largest = INT_MIN;
     for(int i = 0; i < size; i++){

        if(arr[i] > largest){
            Second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > Second_largest && arr[i] != largest){
           Second_largest = arr[i];
        }
    }

    return Second_largest;
}
int SecondSmallestElement (int arr[],int size){
    int smallest = INT_MAX;
    int Second_smallest = INT_MAX;
     for(int i = 0; i < size; i++){

        if(arr[i] < smallest){
            Second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] <Second_smallest && arr[i] != smallest){
           Second_smallest = arr[i];
        }
    }

    return Second_smallest;
}


int main (){
    int arr[] = {1, 2, 4, 7, 7, 5};
    int size = sizeof(arr)/sizeof(int);
    int SecondMaxElement = SecondLargestElement(arr,size);
    cout<<"Second largest element in a given array is : "<<SecondMaxElement<<endl;

    int secondSmallest = SecondSmallestElement(arr,size);
    cout<<"Second smallest element in a given array is : "<<secondSmallest<<endl;
    return 0;

}