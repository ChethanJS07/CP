class Solution
{
  public:
    string removeDups(string str) 
    {
      int hash[26] = {0};
      string result ; 
      for(int i=0; i<str.size(); i++)
      {
        hash[str[i]-'a']++;
        if(hash[str[i]-'a']==1)
        {
          result.push_back(str[i]);
        }
      }
      return result;
    }
};