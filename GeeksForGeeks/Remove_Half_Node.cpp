class Solution {
  public:
    Node* rec(Node* root)
    {
        if (!root) return NULL;
        if (!root->left && !root->right) return root;
        if(root->left)
        root->left=rec(root->left);
        if (root->right)
        root->right=rec(root->right);
        if (!root->left) return root->right;
        if (!root->right) return root->left;
        return root;
    }
    
    Node *RemoveHalfNodes(Node *root) {
        return rec(root);
    }
};