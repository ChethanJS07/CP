#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    int findCoverage(vector<vector<int>>& matrix) 
    {
      int count =0;
      int n = matrix.size();
      int m = matrix[0].size();
  
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
          if(matrix[i][j]==0)
          {
            if(i-1>=0 and matrix[i-1][j]==1) count+=1;
            
            if(j-1>=0 and matrix[i][j-1]==1) count+=1;
            
            if(i+1<n and matrix[i+1][j]==1) count+=1;
            
            if(j+1<m and matrix[i][j+1]==1) count+=1;
          }
        }
      }
      return count;
    }
};

int main() 
{
  int tc;
  cin >> tc;
  while (tc--) 
  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    Solution obj;
    int ans = obj.findCoverage(matrix);
    cout << ans << "\n";
  }
  return 0;
}