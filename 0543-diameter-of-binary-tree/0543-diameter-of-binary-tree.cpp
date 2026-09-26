/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int levels(TreeNode* root ){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

    void helper(TreeNode* root, int &Maxdia){
        if(root==NULL) return ;
        int dia =levels(root->left) + levels(root->right);
         Maxdia=max(Maxdia,dia);

         helper(root->left,Maxdia);
         helper(root->right,Maxdia);

    }

    int diameterOfBinaryTree(TreeNode* root) {
        int Maxdia =0;
        helper(root, Maxdia);
         return Maxdia;

            }

};