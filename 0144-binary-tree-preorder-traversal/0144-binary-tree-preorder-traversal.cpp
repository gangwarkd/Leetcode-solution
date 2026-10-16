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


//  RECURSIVE METHOD

class Solution {
public:
    void preorder(TreeNode* root ,vector<int>&ans){
    if(root==NULL) return;
    ans.push_back(root->val);
    preorder(root->left,ans);
    preorder(root->right,ans);
    } 
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorder(root,ans);
        return ans;
    }
};

// //ITERATIVE METHOD

// class Solution{
//     public:
//     vector<int>ans;
//     stack<Treenode*> st;
//     st.push(root);
//     while(st.size()>0){
//         TreeNode* temp= st
//     }
// }