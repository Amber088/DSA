#include <stdio.h>
#include <iostream>
using namespace std;

int binarySearch(int arr[],int n ,int key){
    int start = 0;
    int end = n-1;
    int mid = (start+(end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+(end-start)/2);
    }
    return -1;
}
int main (){
    int arr[]= {2,4,6,8,12,18};
    int n = sizeof(arr)/sizeof(int);
    int key = 12;
    int xx =binarySearch(arr,n,12);
    cout<<xx<<endl;
    return 0;
}