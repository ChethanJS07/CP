  bool isBST(Node* root, int low = INT_MIN, int high = INT_MAX) 
  {
    if(!root) 
      return true;
        
    int curr = root->data;
    if(low < curr && curr < high) 
    {
      return isBST(root->left, low, curr) and isBST(root->right, curr, high);
    } 
    else 
    {
      return false;
    }
    }