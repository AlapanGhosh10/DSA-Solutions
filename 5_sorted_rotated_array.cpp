#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&);
int main() {
	vector<int> nums;
	int size, temp;
	cin >> size;
	for(int i = 0 ; i < size ; i++) {
		cin >> temp;
		nums.push_back(temp);
	}
	cout << check(nums);
}

bool check(vector<int>& nums) {
    int size = nums.size(), first = nums[0], last = nums[size-1], count = 0;
    if(size == 0 || size == 1 || size == 2)
        return true;
    else
        for(int i = 1 ; i < size ; i++) {
            if(nums[i-1] > nums[i]) {
                if(first < last)
                    return false;
                else
                    count++;
            }
            if(count > 1)
                return false;
        }
    return true;
}