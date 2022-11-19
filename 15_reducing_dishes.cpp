#include<bits/stdc++.h>
using namespace std;

class Solution {
    vector<int> vect;
    int n;
public:
    int getTime(int start) {
        int sum = 0;
        int a = 1;
        for(int i = start ; i < n ; i++) 
            sum = sum + (vect[i] * (a++));
        return sum;
    }
    
    int getLike(int sum, int start) {
        int newSum = getTime(start);
        if(newSum < sum)
            return sum;
        else
            return getLike(newSum, start + 1);
    }
    
    int maxSatisfaction(vector<int>& satisfaction) {
        vect = satisfaction;
        n = vect.size();
        sort(vect.begin(), vect.end());
        int sum = getTime(0);
        if(vect[0] > -1) 
            return sum;
        else if(vect.back() < 0)
            return 0;
        else
            return getLike(sum, 1);
    }
};

int main() {
	Solution obj1;
	vector<int> abc;
	int n;
	while(cin >> n)
		abc.push_back(n);

	int ans = obj1.maxSatisfaction(abc);
	cout << ans;
	return 0;
}