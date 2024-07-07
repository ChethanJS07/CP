class Solution {
  public:
    // Function should return all the ancestor of the target node
     void f(int t,Node* r,vector<int>ds,vector<int>&res){
        if(!r)return;
        if(r->data==t){
            res=ds;
            return;
        }
        ds.push_back(r->data);
        f(t,r->left,ds,res);
        f(t,r->right,ds,res);
    }
    vector<int> Ancestors(struct Node *root, int t) {
        vector<int>ds,res;
        f(t,root,ds,res);
        reverse(res.begin(),res.end());
        return res;
    }
};