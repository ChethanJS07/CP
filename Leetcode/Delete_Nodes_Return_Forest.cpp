/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution 
{
  public:
    // void search(TreeNode* root, vector<TreeNode*> &ans,int data,vector<int>&
    // dele){
    //     if(root==NULL) return;
    //     if(root->val==data) {
    //         if(root->left!=NULL) ans.push_back(root->left);
    //         if(root->right!=NULL) ans.push_back(root->right);
    //     }
    //     else{
    //         search(root->left,ans,data);
    //         search(root->right,ans,data);
    //     }
    // }
    int PostOrder(TreeNode* root, vector<TreeNode*>& ans,unordered_set<int>& dele) 
    {
      if (root == NULL) return 0;
      if(dele.empty()) return 0;
      if (PostOrder(root->left, ans, dele)) root->left = NULL;
      if (PostOrder(root->right, ans, dele)) root->right = NULL;
          auto it = dele.find(root->val);
          if (it != dele.end()) 
          {
            dele.erase(it);
            if (root->left != NULL) ans.push_back(root->left);
            if (root->right != NULL) ans.push_back(root->right);
            return 1;
          }
      return 0;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) 
    {
      vector<TreeNode*> ans;
      TreeNode* temp = root;
      unordered_set<int> hash;
      for (int i = 0; i < to_delete.size(); i++) hash.insert(to_delete[i]);
      int pass=0;    
      if(hash.find(temp->val)!=hash.end()) pass=1;
      PostOrder(temp, ans, hash);
      if(pass==0) ans.push_back(root);
      return ans;
    }
};