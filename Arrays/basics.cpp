#include <stdio.h>
#include<iostream>
using namespace std;
int get_Min(int arr[],int n ){
    int min= INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min; 
}
int get_Max(int arr[],int n ){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max; 
}
bool Linear_search(int arr[],int n,int key ){
    for (int i = 0;i<n;i++){
       if(arr[i]==key){
        return 1;
       }
    }
    return 0;
}
int main(){
    int arr[]={2,3,1,5,6,9,10,1,55,67};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the no. u want to search ";
    cin>>key;
    bool found = Linear_search(arr,n,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not found"<<endl;
    }
    cout<<endl;
    return 0;
}
