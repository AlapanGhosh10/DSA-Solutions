class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> map;
        int count = 0;
        string str;
        for(int i = 0 ; i < strs.size() ; i++) {
            str = strs[i];
            sort(strs[i].begin(), strs[i].end());
            if(map.find(strs[i]) == map.end()) {
                map[strs[i]] = count;
                vector<string> now;
                now.push_back(str);
                res.push_back(now);
                count++;
            } else {
                int index = map.find(strs[i])->second;
                res[index].push_back(str);
            }
        }
        return res;
    }
};

/*************
 Explanation
*************/
/* Create a unordered_map<sorted string, index in res>
count variable to keep track of the last index inserted in res
Only one for loop to traverse all elements {
    store the string in a variable, sort the string in array itself
    If (element not present in map) {
        add it to the map with second value as count
        create a vector push the stored string then push into res
        increment count
    } else {
        find the index by using find() as the key is present
        -> second to get the value, as find() returns iterator
        add the original string to res in the index we found
    }
return res */
