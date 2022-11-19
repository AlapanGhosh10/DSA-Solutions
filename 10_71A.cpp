#include<iostream>
using namespace std;

int main() {
	int n, len;
	string str;
	cin >> n;

	for(int i = 0 ; i < n ; i++) {
		cin >> str;
		len = str.length();
		if(len > 10) 
			cout << str[0] << len - 2 << str[len - 1] << endl;
		else
			cout << str << endl;
	}
}