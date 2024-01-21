/*
K-Rotate
Given an integer vector and a value k, your task is to rotate the array k times clockwise.

Input Format
In the function an integer vector and number k is passed.

Output Format
Return an integer vector.

Sample Input
{1, 3, 5, 7, 9}, k = 2


Sample Output
{7, 9, 1, 3, 5}


Explanation
After 1st rotation - {9, 1, 3, 5, 7}
After 2nd rotation - {7, 9, 1, 3, 5}
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    // your code  goes here
    int n = a.size();
    k = k % n;
    vector<int> b;

    for (int i = n - k; i < n; i++)
    {
        b.push_back(a[i]);
    }
    for (int i = 0; i < n - k; i++)
    {
        b.push_back(a[i]);
    }
    return b;
}

int main()
{
    // Test cases:
    vector<int> arr = {1, 3, 5, 7, 9};
    vector<int> answer = kRotate(arr, 2);
    cout << "Answer:" << endl; // 3
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << ", ";
    }
    arr.clear();

    return 0;
}
