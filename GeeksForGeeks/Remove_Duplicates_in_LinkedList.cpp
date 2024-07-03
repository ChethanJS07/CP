Node* removeAllDuplicates(struct Node* head) 
{
  Node* ptr{head}, *prev{head};
  int dup = 0, lastNodeFlag = 0;
  while(ptr && ptr->next)
  {
    dup = 0;
    while(ptr->next && ptr->next->data == ptr->data)
    {
      dup = 1;
      Node* delPtr = ptr->next;
      ptr->next = delPtr->next;
      delPtr->next = NULL;
    }
    if(dup == 1)
    {
      if(ptr && ptr->next)
      {
        Node* ptrNxt = ptr->next;
        ptr->data = ptrNxt->data;
        ptr->next = ptrNxt->next;
        ptrNxt->next = NULL;
      }
      else
      {
        lastNodeFlag = 1;
        if(ptr == head)
        {
            head = NULL;
        }
        else
        {
            prev->next = NULL;
        }
        break;
      }
    }
    else
    {
      if(ptr && ptr->next)
      {
          prev = ptr;
          ptr = ptr->next;
      }
    }
  }
  return head;
}