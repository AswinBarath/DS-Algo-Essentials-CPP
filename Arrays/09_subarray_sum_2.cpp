#include<iostream>
using namespace std;

int largestSubarraySum2(int arr[], int n) {
	// Prefix Sums Array Computation:
	int prefix[n] = {0};
	prefix[0] = arr[0];
	for(int i=1; i<n; i++) {
		prefix[i] = prefix[i-1] + arr[i];
	}

	// Largest Sum Computation:
	int largest_sum = 0;
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			int subarraySum = i > 0 ? prefix[j] - prefix[i-1] : prefix[j];
			largest_sum = max(largest_sum, subarraySum);
		}
	}
	return largest_sum;
}

int main() {
	int arr[] = {-2,3,4,-1,5,-12,6,1,3};
	int n = sizeof(arr)/sizeof(int);
	cout << "Largest=" << largestSubarraySum2(arr, n) << endl;
	return 0;
}
