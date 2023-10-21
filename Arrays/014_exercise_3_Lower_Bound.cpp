/*
Exercise 3: Lower Bound
Given an array of integers A (sorted) and a integer Val.

Implement a function that takes A and Val as input parameters and returns the lower bound of Val.

Note : If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer.

Otherwise Val itself is the answer.

If Val is less than smallest element of array A then return '-1' in that case.



Example 1  :

A = [-1, -1, 2, 3, 5]

Val = 4

Answer :  3

Since 3 is just smaller than 4 in the array.

Example 2  :

A = [1, 2, 3, 4, 6]

Val = 4

Answer :  4
Since 4 is equal to 4.
*/

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val) {
    // User logs
    // cout << "Val: " << Val << endl;
    // cout << "Vector: ";
    // for(int x : A) {
    //     cout << x << ", ";
    // }
    // cout << endl;
    
    // your code goes here
    int lo = 0, hi = A.size() - 1, ans = -1;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(A[mid] <= Val) {
            ans = A[mid];
            lo = mid+1;
        }
        else hi = mid-1;
    }
    return ans;
}

int lowerBound2(vector<int> A, int Val) {
    // Special Case: If Val is less than smallest element of array A then return '-1' in that case.
    // Clues: Array is sorted, smallest is first element. Hence compare 1st ele & Val.
    if(Val < A[0]) return -1;

    int lo = 0, hi = A.size() - 1, ans = 0;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(A[mid] == Val) return A[mid];
        if(A[mid] < Val) {
            ans = max(ans, A[mid]);
            lo = mid+1;
        }
        else hi = mid-1;
    }
    return ans;
}

int lowerBound1(vector<int> A, int Val) {
    // Special Case: If Val is less than smallest element of array A then return '-1' in that case.
    // Clues: Array is sorted, smallest is first element. Hence compare 1st ele & Val.
    if(Val < A[0]) return -1;

    int lo = 0, hi = A.size() - 1, ans = 0;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(A[mid] == Val) return A[mid];
        if(A[mid] < Val) lo = mid+1;
        else hi = mid-1;
    }
    return A[hi];
}

int main() {
    // Test cases:
    vector<int> arr = {-1, -1, 2, 3, 5};
    cout << "Answer=" << lowerBound(arr, 4) << endl; // 3

    arr.clear();
    arr = {1, 2, 3, 4, 6};
    cout << "Answer=" << lowerBound(arr, 4) << endl; // 4

    arr.clear();
    arr = {-1, 0, 1, 3, 4};
    cout << "Answer=" << lowerBound(arr, 3) << endl; // 3
    
    arr.clear();
    arr = {1, 2, 3, 4, 5};
    cout << "Answer=" << lowerBound(arr, 5) << endl; // 5
    
    arr.clear();
    arr = {1, 2, 3, 4, 5};
    cout << "Answer=" << lowerBound(arr, 0) << endl; // -1
    
    arr.clear();
    arr = {-1, 0, 1, 2, 3};
    cout << "Answer=" << lowerBound(arr, 0) << endl; // 0

    return 0;
}
