class Solution 
{
  public:
    int celebrity(vector<vector<int> >& mat) 
    {
      int n = mat.size();
      int m = mat[0].size();
      int cel = -1;
      for(int i=0; i<n; i++)
      {
        bool nocel = true;
        for(int j=0; j<m; j++)
        {
          if(mat[i][j]!=0)
          {
            nocel = false;
            break;
          }
        }
        if(nocel)
        {
            cel = i;
        }
      }
      if(cel == -1)
      {
        return cel;
      }
      
      for(int i=0; i<n; i++)
      {
        if(cel==i)
        {
          continue;
        }
        if(mat[i][cel] != 1)
        {    
          return -1;
        }
      }
      return cel;
    }
};