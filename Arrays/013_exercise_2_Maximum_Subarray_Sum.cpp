/*
Exercise 2: Maximum Subarray Sum
Implement a function that takes an array as input and returns the maximum subarray sum.

Sample Input

1 -2 3 4 4 -2
5 0 -1 0 1 2 -1
Sample Output

11
7
Explanation : for test case one, A[2..4] is [3, 4, 4] and It has max sum 3 + 4 + 4 = 11,

Similarly for test case two, answer should be 7.



Note: Minimum size of the subarray should be 1.
*/

#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    // all negative elements
    bool allNeg = true;
    int largest = INT_MIN;
    for(int x : A) {
        if(x > 0) {
            allNeg = false;
            break;
        }
        largest = max(largest, x);
    }
    if(allNeg) return largest;

    int largest_sum = 0;
    int current_sum = 0;
    for(int i=0; i<A.size(); i++) {
        current_sum = current_sum + A[i];
        if(current_sum < 0) {
            current_sum = 0;
        }
        largest_sum = max(largest_sum, current_sum);
        // User logs:
        // cout << A[i] << ", ";
    }
    // cout << "largest=" << largest_sum << endl;
    return largest_sum;
}

int main() {
    // Test cases:
    vector<int> arr = {1, -2, 3, 4, 5, -1};
    cout << "largest=" << maxSumSubarray(arr) << endl;

    arr.clear();
    arr = {1, -1, -1, 3, 4, -1, 8};
    cout << "largest=" << maxSumSubarray(arr) << endl;

    arr.clear();
    arr = {1, -2, 3, 4, 4, -2};
    cout << "largest=" << maxSumSubarray(arr) << endl;
    
    arr.clear();
    arr = {5, 0, -1, 0, 1, 2, -1};
    cout << "largest=" << maxSumSubarray(arr) << endl;
    
    arr.clear();
    arr = {1, 3, 4, 0};
    cout << "largest=" << maxSumSubarray(arr) << endl;
    
    arr.clear();
    arr = {-1, -1, -2};
    cout << "largest=" << maxSumSubarray(arr) << endl;

    return 0;
}
