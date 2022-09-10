#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q, k, i, j, tempN;
    cin >> n >> q;
    vector<vector<int>> a;
    for(int x = 0 ; x < n ; x++) {
        cin >> k;
        vector<int> tempV;
        for(int y = 0 ; y < k ; y++) {
            cin >> tempN;
            tempV.push_back(tempN);
        }
        a.push_back(tempV);
        tempV.clear();
    }
    for(int z = 0 ; z < q ; z++) {
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}