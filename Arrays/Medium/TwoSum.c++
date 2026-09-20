#include <iostream>

using namespace std;

void findAndPrintTwoSum(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                // Print directly here!
                cout << "[" << i << ", " << j << "]" << endl;
                return; // Exit as soon as it's printed
            }
        }
    }
    cout << "No solution found." << endl;
}

int main() {
    int nums[] = {3,2,4};
    int n = 3;
    int target = 6;
    
    findAndPrintTwoSum(nums, n, target); // Directly prints [0, 1]
    
    return 0;
}