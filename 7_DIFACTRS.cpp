#include <iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> fact;
	for(int i = 1 ; i <= n ; i++)
		if(n % i == 0)
			fact.push_back(i);
	int size = fact.size();
	cout << size << endl;
	for(int i = 0 ; i < size ; i++)
		cout << fact[i] << " ";
	return 0;
}
