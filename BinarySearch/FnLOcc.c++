#include <stdio.h>
#include <iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;        // Save the index
            end = mid - 1;    // Search left for the first occurrence
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int LastOcc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    
    while(start <= end) {
        if(arr[mid] == key) {
           ans = mid;         // FIX: Save the index here!
           start = mid + 1;   // Search right for the last occurrence
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 3, 5};
    int n = sizeof(arr) / sizeof(int);
    int key = 3;
    
    cout << "First Occurrence: " << FirstOcc(arr, n, key) << endl;
    cout << "Last Occurrence: " << LastOcc(arr, n, key) << endl;
    return 0;
}