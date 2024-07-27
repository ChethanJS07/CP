class Solution
{
  public:
    int solve(int i, int j, int n, string str, vector<vector<int>>& v)
    {
      if(i>j) return 0;
      if(v[i][j]!=-1) return v[i][j]; 
      if(str[i]==str[j]) return v[i][j] = solve(i+1, j-1, n, str, v);
      return v[i][j] = 1 + min(solve(i+1, j, n, str, v), solve(i, j-1, n, str, v));
    }
    int countMin(string str)
    {
      int n=str.size();
      vector<vector<int>> v(n, vector<int>(n, -1)); 
      return solve(0, n-1, n, str, v);
    }
};