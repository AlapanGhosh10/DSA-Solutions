#include<iostream>
#include<math.h>
using namespace std;

int main() {
	long n, k, in;
	cin >> n >> k;

	long num = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> in;
		in = in * pow(4,i);
		num =  num + in;
	}

	num = num + k;
	while(num > 0) {
		cout << num % 4 << " ";
		num = num / 4;
	}
}