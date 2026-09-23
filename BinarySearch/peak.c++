#include <iostream>
#include<stdio.h>
using namespace std;
int peak(int nums[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans=0;
    while(s<e){
        mid = s+(e-s)/2;
        if(nums[mid]<nums[mid+1]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;

}
int main(){
    int nums[]= {1,2,3,2,1};
    int n = sizeof(nums)/sizeof(int);
    cout<<peak(nums,n);
    return 0;
}