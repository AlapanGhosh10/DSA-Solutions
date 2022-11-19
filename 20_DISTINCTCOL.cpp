#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	while(n > 0) {
	    int a;
	    cin >> a;
	    int max = 0;
	    while(a > 0) {
	        int cnt;
	        cin >> cnt;
	        if(cnt > max)
	            max = cnt;
	        a--;
	    }
	    cout << max << endl;
	    n--;
	}
	return 0;
}
