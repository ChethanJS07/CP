#include <bits/stdc++.h>
using namespace std;

bool isToepliz(vector<vector<int>> &mat);

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) 
    {
      for (int j = 0; j < m; j++)
        cin >> a[i][j];
    }

    bool b = isToepliz(a);

    if (b == true)
      cout << "true";
    else
      cout << "false";

    cout << endl;
  }
  return 0;
}

bool isToepliz(vector<vector<int>>& mat) 
{
  int n=mat.size();
  int m=mat[0].size();
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(i+1<n && j+1<m)
      {
        if(mat[i][j]!=mat[i+1][j+1])
        {
          return false;
        }
      }
    }
  }
  
  return true;
}