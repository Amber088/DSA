#include<stdio.h>
#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return -1;
}

int getPivot(int arr[], int n){

    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while(start < end){

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int search(int arr[], int n, int key){

    int pivot = getPivot(arr, n);

    // Right side
    if(key >= arr[pivot] && key <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, key);
    }

    // Left side
    else{
        return binarySearch(arr, 0, pivot-1, key);
    }
}

int main(){

    int arr[] = {3,8,10,17,1};
    int n = sizeof(arr) / sizeof(int);

    int key = 10;
    if(search(arr, n, key) != -1) {
    cout << "Element found";
}
else {
    cout << "Element not found";
}

    return 0;
}