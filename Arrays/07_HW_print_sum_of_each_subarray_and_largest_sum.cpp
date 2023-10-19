#include <iostream>
#include <conio.h>
using namespace std;


void print_sum_of_each_subarray_and_largest_sum(int arr[], int n) {
    int largest = 0;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int sum = 0;
            for(int k=i; k<=j; k++) {
                sum += arr[k];
            }
            cout<<sum<<", ";
            largest = largest < sum ? sum : largest;
        }
        cout<<endl;
    }
    cout<<"largest="<<largest;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr)/sizeof(int);
    print_sum_of_each_subarray_and_largest_sum(arr, n);

    getch();
    return 0;
}