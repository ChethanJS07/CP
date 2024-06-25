#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) 
    {
      vector<vector<int>> v(mat.size(), vector<int>(mat[0].size(), 0));
      int row = mat.size();
      int col = mat[0].size();
      for(int i=0;i<row;i++)
      {
          for(int j=0;j<col;j++)
          {
              v[i][j]=mat[i][(j+k)%col];
          }
      }
      return v;
    }
};

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    Solution ob;
    vector<vector<int>> ans = ob.rotateMatrix(k, mat);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
  }
}