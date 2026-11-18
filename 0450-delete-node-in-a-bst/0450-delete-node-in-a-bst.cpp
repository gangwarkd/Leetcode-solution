class Solution {
public:
    TreeNode* ios(TreeNode* root) {
        TreeNode* suc = root->right;
        while (suc->left != NULL) {
            suc = suc->left;
        }
        return suc;
    }
    // TreeNode* iop(TreeNode* root){
    //     TreeNode* pred=root->left;
    //     while(root->right!=NULL){
    //         pred=root->right;
    //     }
    //     return pred;
    // }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL)
            return NULL;
        if (root->val == key) {
            // case 1: No child
            if (root->left == NULL && root->right == NULL) {
                return NULL;
            }
            // case 2: 1 child node
            if (root->left == NULL || root->right == NULL) {
                if (root->left == NULL)
                    return root->right;

                else
                    return root->left;
            }
            // case 3:2 child nodes
            if (root->left != NULL && root->right != NULL) {
                // replace the root with inorder preceddessor
                // after replaceing delete pred/sec

                TreeNode* suc = ios(root);
                root->val = suc->val;
                root->right = deleteNode(root->right, suc->val);
            }
            //   if(root->left != NULL && root->right !=NULL){
            //     //replace the root with inorder preceddessor
            //     //after replaceing delete pred/sec

            //     TreeNode* pred=iop(root);
            //     root->val=pred->val;
            //     root->left=deleteNode(root->left,pred->val);
            //   }
        }

        else if (root->val > key) {
            root->left = deleteNode(root->left, key);
        } else {
            root->right = deleteNode(root->right, key);
        }
        return root;
    }
};