#include <stdio.h>
#include <iostream>
using namespace std;
//continous part of an array is known as subArray
void PrintSubArr(int nums[],int n){
    // This loops decides the starting point
    for(int start = 0;start<n;start++){
    // this loop decide the ending point
        for(int end=start;end<n;end++){
            // this loop  actually traverse/print
             for (int k = start;k<=end;k++ ){
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