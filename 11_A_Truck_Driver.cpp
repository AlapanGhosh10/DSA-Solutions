#include<iostream>
#include<vector>
using namespace std;

int main() {
	int k, in, len;
	cin >> k;

	vector<int> w(k);
	while(cin >> in) {
		for(int i = 0 ; i < k ; i++) {
			if(w[i] == 0) {
				w[i] = in;
				break;
			}
			else if(w[i] < in){
				for(int j = k-1; j > i ; j--) {
					w[j] = w[j-1];
				}
				w[i] = in;
				break;
			}
		}
	}											
	cout << w[k-1];
}