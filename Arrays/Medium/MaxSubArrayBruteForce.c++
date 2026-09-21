#include <stdio.h>
#include <iostream>
using namespace std;
void maxSubArraySum1(int nums[],int n ){
    int maxSum;
    for (int start =0;start<n;start++){
        for(int end = start;end<n;end++){
            int currSum = 0;
            for(int i = start;i<=end;i++){
                currSum += nums[i];
            }
            // cout<<currSum<< " , ";
             maxSum = max(maxSum,currSum);
        }
        cout<<endl;
    }
    cout<<"MaxSubArray is : "<<maxSum;
     
}
int main (){
    int nums[]= {2,-3,6,-5,4,2};
    int n = sizeof(nums)/sizeof(int);
    maxSubArraySum1(nums,n);
    return 0;

}