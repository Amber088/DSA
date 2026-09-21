#include <stdio.h>
#include <iostream>
using namespace std;
//continous part of an array is known as subArray
void PrintSubArr(int nums[],int n){
    for(int i = 0;i<n;i++){
        // cout<<"("<<nums[i]<<") ";
        for(int j=i;j<n;j++){
            // cout<<"("<<nums[i]<<","<<nums[j]<<") ";
             for (int k = i;k<=j;k++ ){
                cout<<nums[k];
             }
             cout<<" ,";
        }
        cout<<endl;
    }
    cout<<endl;

}
int main (){
    int nums[]= {1,2,3,4,5};
    int n = sizeof(nums)/sizeof(int);
    PrintSubArr(nums,n);
    return 0;

}