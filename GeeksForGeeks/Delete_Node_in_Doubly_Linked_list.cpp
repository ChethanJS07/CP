class Solution 
{
  public:
    Node* deleteNode(Node* head, int x) 
    {
      Node* dummy=new Node(-1);
      Node* curr=dummy;
      dummy->next=head;
      
      for(int i=0; i<x-1; i++)
      {
          curr=curr->next;
          
      }
      
      curr->next=curr->next->next;
      return dummy->next;
    }
};