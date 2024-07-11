class Solution 
{
  public:
    int x[4]= {0,0,1,-1};
    int y[4]= {1,-1,0,0};
    void dfs(int i, int j, int c, int &temp, int n, int m, vector<vector<int>> &v, vector<vector<int>> &vis, vector<vector<int>> &mp) 
    {
      if(i<0 || i==n || j<0 || j==m || !v[i][j] || vis[i][j]) return;
      vis[i][j]=1;
      temp++;
      mp[i][j]=c;
      for(int k=0;k<4;k++) 
      {
        dfs(i+x[k], j+y[k], c, temp, n, m, v, vis, mp);
      }
    }
    
    void fun(int i, int j, int n, int m, int &ans, vector<vector<int>> &mp, unordered_map<int, int> &mpp) 
    {
      int temp=0;
      set<int> s;
      for(int k=0;k<4;k++) 
      {
        if(i+x[k]<0 || i+x[k]==n || j+y[k]<0 || j+y[k]==m || mp[i+x[k]][j+y[k]]==-1) continue;
        s.insert(mp[i+x[k]][j+y[k]]);
      }
      for(auto it : s) 
      {
        temp+=mpp[it];
      }
      ans=max(ans, 1+ temp);
    }
    
    int MaxConnection(vector<vector<int>>& v) 
    {
      int n=v.size(), m=v[0].size(), ans=0;
      vector<vector<int>> vis(n, vector<int> (m, 0)), mp(n, vector<int> (m, -1));
      unordered_map<int, int> mpp;
      
      int c=0;
      for(int i=0;i<n;i++) 
      {
        for(int j=0;j<m;j++) 
        {
          if(v[i][j] && !vis[i][j]) 
          {
            int temp=0;
            dfs(i, j, c, temp, n, m, v, vis, mp);
            mpp[c]=temp;
            c++;
          }
        }
      }
      for(auto it : mpp) ans=max(ans, it.second);
      
      for(int i=0;i<n;i++) 
      {
        for(int j=0;j<m;j++) 
        {
          if(!v[i][j]) fun(i, j, n, m, ans, mp, mpp);
        }
      }
      return ans;
    }
};