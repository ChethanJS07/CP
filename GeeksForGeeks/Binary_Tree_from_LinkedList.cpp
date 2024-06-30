void convert(Node *head, TreeNode *&root) 
{
  if (head == NULL) return;
  root = new TreeNode(head->data);
  head = head->next;
  queue<TreeNode*> q;
  q.push(root);

  while (head != NULL) 
  {
    TreeNode *parent = q.front();
    q.pop();
    TreeNode *leftChild = NULL, *rightChild = NULL;
    if (head != NULL) 
    {
        leftChild = new TreeNode(head->data);
        head = head->next;
        q.push(leftChild);
    }
    if (head != NULL) 
    {
      rightChild = new TreeNode(head->data);
      head = head->next;
      q.push(rightChild);
    }
    parent->left = leftChild;
    parent->right = rightChild;
  }
}