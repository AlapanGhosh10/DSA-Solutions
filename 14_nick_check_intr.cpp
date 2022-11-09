#include<iostream>
#include<vector>
using namespace std;

int areConsecutive(int inp1, vector<int> inp2) {
	int max = inp2[0];
	int min = inp2[0];
	int elem;
	if(inp1 < 2)
		return 1;
	for(int i = 1 ; i < inp1 ; i++) {
		elem = inp2[i];
			if(elem == inp2[i-1]) 
				return 0;
			if(elem < min)
				min = elem;
			if(elem > max)
				max = elem;
	}

	if(max - min == inp1)
		return 1;
	else
		return 0;
}


int main() {
	int a = 6;
	vector<int> arr = {1,9,2,4,0,3};
	int res = areConsecutive(a, arr);
	cout << res;
}