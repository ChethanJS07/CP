class Solution {
  public:
    void tr(int p, Node* root,unordered_map<int,int>&mp){
        if(!root)return;
        mp[p]++;
        tr(p-1,root->left,mp);
        tr(p+1,root->right,mp);
    }
    int verticalWidth(Node* root) {
        int p = 0;
        unordered_map<int,int>mp;
        tr(p,root,mp);
        return mp.size();
    }
};
