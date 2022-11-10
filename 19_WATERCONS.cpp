#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	while(n > 0) {
	    int a;
	    cin >> a;
	    if(a >= 2000)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	    n--;
	}
	return 0;
}
