#include <iostream>
#include <vector>
using namespace std;

int main() {
	// Vector Demo: Most Commonly used Vector methods
	// vector<int> arr = {1,2,10,12,15};

	// Fill Constructor: 
	// First argument is the no. of the elements;
	// Second argument is the value of all the elements;
	vector<int> arr(10,7);

	vector<int> visited(10,0);

	// pop_back = Removes the last element from the vector at constant time O(1)
	arr.pop_back();

	// push_back = Inserts an element at the end of the vector at constant time O(1)
	arr.push_back(16);
	
	// Size of the Vector = No. of elements
	cout << "Size of the Vector=" << arr.size() << endl;

	// Capacity of the Vector = Actual memory allocated to the vector
	cout << "Capacity of the Vector=" << arr.capacity() << endl;

	// Print all the elements
	for(int i=0; i<arr.size(); i++) {
		cout << arr[i] << endl;
		// Similar to arrays, we can access the ith element 
		// by writing the name of the vector followed by the index
	}

	// insert = Inserts an element at the middle of the vector

	// erase = Removes a particular element from the vector

	return 0;
}