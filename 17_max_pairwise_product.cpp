#include<bits/stdc++.h>
using namespace std;

long long maxPairProduct(vector<int>& arr, int n) {
	int max1 = 0;
	int max2 = 0;
	for(int i = 0 ; i < n ; i++) {
		if(arr.at(i) > max1) {
			max2 = max1;
			max1 = arr.at(i);
		}
		else if(arr.at(i) > max2) {
			max2 = arr.at(i);
		}
	}
	return (long long)max1 * max2;
}

int main() {
	int n;
	cin >> n;

	vector<int> arr(n);
	for(int i = 0 ; i < n ; i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	cout << maxPairProduct(arr, n);
	return 0;
}