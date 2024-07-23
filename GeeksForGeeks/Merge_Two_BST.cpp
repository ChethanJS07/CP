class Solution 
{
  public:
    void inorder(Node* root, vector<int> &data)
    {
      if (root == NULL) 
      {
        return;
      }
      inorder(root->left,data);
      data.push_back(root->data);
      inorder(root->right,data);
    }
    vector<int> mergeArrays(vector<int> &a,vector<int> &b)
    {
      vector<int> ans(a.size()+b.size());
      int n = a.size();
      int m = b.size();
      int i =0;
      int j = 0;
      int k = 0;
      while(i<n && j<m)
      {
        if(a[i]<b[j])
        {
          ans[k++] = a[i];
          i++;
        }
        else
        {
          ans[k++] = b[j];
          j++;
        }
      }
      while(i<n)
      {
        ans[k++] = a[i];
        i++;
      }
      while(j<m)
      {
        ans[k++] = b[j];
        j++;
      }
      return ans;
    }
    Node* inoderToBST(int start, int end ,vector<int> &data)
    {
      int mid = start+(end-start)/2;
      if(start>end){
          return NULL;
      }
      Node* root = new Node(data[mid]);
      root->left = inoderToBST(start, mid-1, data);
      root->right = inoderToBST(mid+1,end,data);
      
      return root;
    }
    vector<int> merge(Node *root1, Node *root2) 
    {
      vector<int> bst1, bst2;
      inorder(root1, bst1);
      inorder(root2, bst2);
  
      vector<int> mergedArray = mergeArrays(bst1, bst2);
      int start = 0;
      int end = mergedArray.size() - 1;
      Node* mergedRoot = inoderToBST(start, end, mergedArray);
  
      vector<int> result;
      inorder(mergedRoot, result);
      return result;
    }
};