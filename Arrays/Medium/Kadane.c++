#include <iostream>
#include <climits>
using namespace std;
void Kadane(int nums[],int n ){
    int maxSum = INT_MIN;
    int currSum =0;
    for(int i =0;i<n;i++){
        currSum +=nums[i];
        maxSum = max(maxSum ,currSum);
        if(currSum<0){
            currSum =0;
        }
    }
     cout << "MaxSubArray Sum is : " << maxSum<<endl;
}

int main() {

    int nums[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(nums) / sizeof(int);
    Kadane(nums,n);

    return 0;
}