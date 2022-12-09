/* Unoptimized Code */
/* Space Blunder -> sending whole array as argument
   So there are seperate array for each node */
/* Parents nodes are stored in array and send to left and right */
class Solution {
private:
    int max = INT_MIN;
    void diff(TreeNode* node, vector<int> arr) {
        for(int i = 0 ; i < arr.size() ; i++) {
            int dif = abs(arr[i] - node->val);
            if(dif > max)
                max = dif;
        }
        arr.push_back(node->val);
        if(node->left)
            diff(node->left, arr);
        if(node->right)
            diff(node->right, arr); 
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        vector<int> prevs = {};
        diff(root, prevs);
        return max;
    }
};
