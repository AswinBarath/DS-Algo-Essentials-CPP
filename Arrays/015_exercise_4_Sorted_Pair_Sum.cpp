/*
Exercise 4: Sorted Pair Sum
Given a sorted array and a number x, find a pair in array whose sum is closest to x.

Input Format
In the function an integer vector and number x is passed.

Output Format
Return a pair of integers.

Sample Input
{10, 22, 28, 29, 30, 40}, x = 54

Sample Output
22 and 30
*/

#include <bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    pair<int, int> ans;
    int diff = INT_MAX;
    int N = arr.size();
    int s = 0, e = N - 1;
    while (s < e)
    {
        int curr_sum = arr[s] + arr[e];
        if (abs(x - curr_sum) < diff)
        {
            ans.first = arr[s];
            ans.second = arr[e];
            diff = abs(x - curr_sum);
        }
        if (curr_sum > x) e--;
        if (curr_sum < x) s++;
    }
    return ans;
    // Two other easy methods to return a pair
    // return {a,b};
    // return make_pair(a,b);
}

int main()
{
    // Test cases:
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    pair<int, int> answer = closestSum(arr, 54);
    cout << "Answer=" << answer.first << ", " << answer.second << endl; // 3

    arr.clear();

    return 0;
}
