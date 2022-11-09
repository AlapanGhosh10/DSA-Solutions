#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int px, py, r, qx, qy;
        int nP = points.size();
        int nQ = queries.size();
        vector<int> counts(nQ);

        for(int i = 0 ; i < nP ; i++) {
            px = points[i][0];
            py = points[i][1];
            for(int j = 0 ; j < nQ ; j++) {
                qx = queries[j][0];
                qy = queries[j][1];
                r = queries[j][2];
                if(sqrt(pow(px - qx, 2) + pow(py - qy, 2)) <= r)
                    counts[j]++;
            }
        }
        return counts;
}

int main() {
	vector<vector<int>> a = {{1,1},{2,2},{3,3},{4,4},{5,5}};
	vector<vector<int>> b = {{1,2,2},{2,2,2},{4,3,2},{4,3,3}};
	vector<int> res = countPoints(a, b);
	for(int p : res)
		cout << p << " ";
}