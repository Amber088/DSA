#include<stdio.h>
#include <iostream>
using namespace std;
int sqrt(int input){
    int s = 0;
    int e = input;
    int ans = 0;
    while(s<=e){
        long long mid = s +(e-s)/2;
        if(mid*mid ==input){
            return mid;
        }
        if(mid*mid>input){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    int input = 9;
    cout<<sqrt(input)<<endl;
    return 0;
}