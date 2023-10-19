// Arrays & Functions - Pass by reference

#include<iostream>
using namespace std;

// void printArray(int arr[]) { // Demo I
// void printArray(int * arr) { // Demo II
void printArray(int arr[], int n) { // Demo III

	cout << "In Function " << sizeof(arr) << endl;
	// int n = sizeof(arr)/sizeof(int); // // Demo I & II
	arr[0] = 100; // Demo III
	for(int i=0; i<n; i++) {
		cout << arr[i] << endl;
	}

}

int main() {

	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(int);
	printArray(arr, n);

	cout << "In Main " << sizeof(arr) << endl;
	for(int i=0; i<n; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
