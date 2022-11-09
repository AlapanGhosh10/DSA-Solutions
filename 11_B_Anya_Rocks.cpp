#include<iostream>
using namespace std;

int main() {
	int n, c;
	cin >> n >> c;

	int count = 0;
	int prev = 0;
	int cur, next;
	cin >> cur;

	while(cin >> next) {
		if(cur != prev && cur != next)
			count = count + 1;
		prev = cur;
		cur = next;
	}

	if(prev == cur)
		cout << count;
	else
		cout << count + 1;
}