#include <stdio.h>
#include<iostream>
#include<climits>
using namespace std;
int LongestSubArray(int nums[],int n,int k){
    int maxLength =0;
    int left = 0;
    int current_sum = 0;
    for(int right =0;right<n;right++){
        current_sum +=nums[right];
        while(current_sum>k &&left<=right){
            current_sum -= nums[left];
            left++;
        }
            if(current_sum ==k){
                maxLength = max(maxLength,right-left+1);
            
        }
    }
    return maxLength;

}

int main(){
    int nums[]={3,1,2,1,5};
    int n =sizeof(nums)/sizeof(int);
    int k = 4;
    int MaxLength = LongestSubArray(nums,n,k);
    cout<<MaxLength<<endl;
    return 0;

}