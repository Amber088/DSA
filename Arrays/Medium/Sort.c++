#include <stdio.h>
#include<iostream>
#include<climits>
using namespace std;
void PrintArray(int nums[], int n){
    for (int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout<<endl;
}

void sortColors(int nums[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    
    while (mid <= high) {
        if (nums[mid] == 0) {
            // Swap to the left section
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } 
        else if (nums[mid] == 1) {
            // 1 is in the right place, just move mid forward
            mid++;
        } 
        else { // nums[mid] == 2
            // Swap to the right section
            swap(nums[mid], nums[high]);
            high--;
            // Note: Don't increment mid here because the swapped element 
            // from 'high' needs to be checked next.
        }
    }

}
int main(){
    int nums[]={2,0,2,1,1,0};
    int n =sizeof(nums)/sizeof(int);
    sortColors(nums,n);
    PrintArray(nums,n);
    return 0;

}