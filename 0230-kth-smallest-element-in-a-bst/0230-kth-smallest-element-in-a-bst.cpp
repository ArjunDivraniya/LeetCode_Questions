
class Solution {
public:
void inordered(TreeNode* root,vector<int>& tree) {
            if (root == nullptr) {
                return;
            }
            inordered(root->left,tree);
            tree.push_back(root->val);
            inordered(root->right,tree);
        }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> tree;
        inordered(root,tree);
        return tree[k-1];
    }
};