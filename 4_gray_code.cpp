#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void code(vector<int> &);
void invert(vector<int> &, int);

int main() {
	int n;
	vector<int> gray;
	
	cin >> n;
	
	// Initialise first gray code
	for(int i = 0 ; i < n ; i++) {
		gray.push_back(0);
	}
	
	code(gray);

    // limit is the total number of gray codes for n
	int limit = pow(2,n);

	/* check if i i.e. the number in decimal divides limit / 2
	keep on checking  limit/2/2 and on until we  get the one that divides
	also keep a count increment at each iteration
	the iteration where it has 0 remainder
	we invert the count th index and print the code */
	for(int i = 1 ; i < limit ; i++) {
		int check = limit / 2;
		int count = 0;
		while(i % check != 0) {
			check /= 2;
			count++;
		}
		invert(gray, count);
		code(gray);
	}
}

// Function to print the gray code
void code(vector<int> &arr) {
	for(int i = 0 ; i < arr.size() ; i++)
		cout << arr[i];
	cout << endl;
}

// Function to invert the only bit at each increment
void invert(vector<int> &arr, int i) {
	if(arr[i] == 0)
		arr[i] = 1;
	else
		arr[i] = 0;
}