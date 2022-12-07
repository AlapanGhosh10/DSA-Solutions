class Solution {
/*There is a better solution with Priority Queue */
  public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(map.find(nums[i]) == map.end())
                map[nums[i]] = 1;
            else
                map[nums[i]]++;
        }
        multimap<int, int> mmap;
        for(auto it : map)
            mmap.insert({it.second, it.first});
        vector<int> res;
        auto it = mmap.end();
        it--;
        int i = 0;
        while(i < k) {
            res.push_back(it->second);
            i++;
            it--;
        }
        return res;
    }
};

/*************
 Explanation
*************/
/* Firstly stored all unique elements and their count in map -> O(n)
Then transferred the map to multimap w.r.t count
(multimap sorts in ascending order wrt key)
so in multimap we exchange key with value and insert
Finally we make an iterator from multimap.end()
run it k times and insert the value of those into vector
return vector */
