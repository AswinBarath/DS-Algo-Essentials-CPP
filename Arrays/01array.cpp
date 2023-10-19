// Array Operations: Create, Input, Output, Update

#include<iostream>
using namespace std;

int main() {

	// New Array initialized with zero values
	int marks[100] = {0};
	
	int n;
	cout << "Enter the no. of students: ";
	cin >> n;


	// Input
	cout << "Enter the marks of students: ";	
	for (int i = 0; i < n; i++) {
		cin >> marks[i];

		// Update
		marks[i] = marks[i] * 2;
	}

	// Output
	cout << "Marks of students: ";	
	for (int i = 0; i < n; i++) {
		cout << marks[i] << ", ";
	}

	cout << endl;

	return 0;
}
