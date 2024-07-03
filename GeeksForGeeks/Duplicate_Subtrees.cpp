class Solution 
{
  public:
    map<string, int>mp;
    string solve(Node* root,vector<Node*> &duplicates)
    {
      if (!root)
      return "$";
      string s = to_string(root->data) + "/";
      s += solve(root->left, duplicates) + "/";
      s += solve(root->right, duplicates);
      mp[s]++;
      if (mp[s] == 2) 
      {
        duplicates.push_back(root);
      }
      return s;
    }
    vector<Node*> printAllDups(Node* root)
    {
      vector<Node*> ans;
      solve(root, ans);
      mp.clear(); 
      return ans;
    }
};