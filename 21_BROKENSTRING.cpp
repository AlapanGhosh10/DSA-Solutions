#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	while(n > 0) {
	    int size;
	    cin >> size;
	    string str;
	    cin >> str;
	    size /= 2;
	    string p1 = str.substr(0, size);
	    string p2 = str.substr(size);
	    if(p1 == p2)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;;
	    n--;
	}
	return 0;
}
