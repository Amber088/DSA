#include<iostream>
#include<stdio.h>
using namespace std;
int findFirstOcc (int nums[],int n ,int target){
    int ans = -1;
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            ans = mid;
            e = mid-1;
        }
        else if(nums[mid]<target){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return ans;
}
int findLastOcc (int nums[],int n ,int target){
    int ans = -1;
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            ans = mid;
            s = mid+1;
        }
        else if(nums[mid]<target){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return ans;
}
int main(){
    int nums[]= {5,7,7,8,8,10};
    int n = sizeof(nums)/sizeof(int);
    int target = 1;
    cout<<findFirstOcc(nums,n,target)<<endl;
     cout<<findLastOcc(nums,n,target)<<endl;
    return 0;
}