class Solution {
public:
    int maxArea(vector<int>& height) {
        int store, i = 0, j = height.size() - 1, max = 0;
        while(i < j) {
            store = min(height[i], height[j]) * (j - i);
            if(store > max)
                max = store;
            if(height[i] > height[j])
                j--;
            else
                i++;
        }
        return max;
    }
};
