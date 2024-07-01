class Solution 
{
  public:
    bool check(string s)
    {
      int st = 0,en = s.size()-1;
      while(st < en)
      {
        if(s[st]!=s[en])
        {
          return false;
        }
        st++;
        en--;
      }
      return true;
    }
    bool compute(Node* head) 
    {
      string s = "";
      while(head!=nullptr)
      {
        s += (head->data);
        head = head->next;
      }
      return check(s);
    }
};