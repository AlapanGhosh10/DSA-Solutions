/* Given a string s, sort it in decreasing order based on 
the frequency of the characters. The frequency of a character 
is the number of times it appears in the string. 
Return the sorted string. If there are multiple answers, return any of them.*/

/* Example 1:
Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
*/

/* Done without Priority Queue */
/* May be will be better with priority queue */
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> map;
        for(int i = 0 ; i < s.length() ; i++) {
            if(map.find(s[i]) == map.end())
                map[s[i]] =  1;
            else
                map[s[i]]++;
        }
        multimap<int, char> mmap;
        for(auto& itr : map) 
            mmap.insert({itr.second, itr.first});
        
        string res = "";
        for(auto it = mmap.rbegin() ; it != mmap.rend() ; it++) {
            int count = it->first;
            for(int i = 0 ; i < count ; i++)
                res += it->second;
        }
        return res;
    }
};

/* Explanation
Used Unorderd Map to get specific characters and count the number of times they are present
Then Put them in Multimap inorder of the iterator->second i.e. the number of times each character is present
as multimap stores in ascending order we use reverse iterator rbegin() and rend()
then just create the resultant string */
