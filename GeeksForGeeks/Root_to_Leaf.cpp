class Solution 
{
  public:
    bool hasPathSum(Node *root, int target) 
    {
      if(root==NULL)
          return false; 
      target-=root->data;
      if(root->left==NULL && root->right==NULL && target==0)
          return true;
      return hasPathSum(root->left, target)||hasPathSum(root->right, target);
    }
};