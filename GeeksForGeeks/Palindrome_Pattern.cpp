class Solution
{
  private:
    bool isPalindrom(string & str)
    {
      int i=0,j=str.size()-1;
      while(i<=j)
      {
        if(str[i] != str[j])
          return false;
        i++,j--;
      }
      return true;
    }
  public:
    string pattern(vector<vector<int>> &arr) 
    {
      int n = arr.size();
      for(int i=0; i<n; i++)
      {
        string str = "";
        for(int j=0; j<n; j++)
        {
          str += (char)(arr[i][j]+'0');
        }
        if(isPalindrom(str))
        {
          return to_string(i)+" R";
        }
      }
      
      for(int i=0; i<n; i++)
      {
        string str = "";
        for(int j=0; j<n; j++)
        {
          str += (char)(arr[j][i]+'0');
        }
        if(isPalindrom(str))
        {
          return to_string(i)+" C";
        }
      }
      
      return "-1";
    }
};