class Solution 
{
  public:
    string printString(string s, char ch, int count) 
    {
      int i=0;
      for(;i<s.length();i++)
      {
        if(s[i]==ch)
        {
          count--;
          if(!count) break;
        }
      }
      if(i<s.length()-1) return s.substr(i+1);
      return "";
    }
}; 