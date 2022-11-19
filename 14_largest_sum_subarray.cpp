#include<iostream>
#include<climits>
using namespace std;

int largestSumSubarray(int arr[], int n) {
	int sum, maxSum = INT_MIN;
	for(int i = 0 ; i < n ; i++) {
		for(int j = i ; j < n ; j++) {
			sum = 0;
			for(int k = i ; k <= j ; k++) {
				sum += arr[k];
			}
			maxSum = max(maxSum, sum);
		}
	}
	return maxSum;
}

int main() {
	int arr[] = {-2, 3, 4, 5, -12, 6, 2, 3};
	int n = sizeof(arr) / sizeof(int);
	int max = largestSumSubarray(arr, n);
	cout << max << endl;
	return 0;
}