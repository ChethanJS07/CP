#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution 
{
public:
    ll solve(int ind, int last, int n, vector<vector<ll>> &dp, vector<vector<int>> &adj) 
    {
      if(ind == n)
          return 1;
      
      if(dp[ind][last] != -1)
          return dp[ind][last];
          
      ll ans = 0;
      for(auto v: adj[last]) 
          ans += solve(ind + 1, v, n, dp, adj);
      
      return dp[ind][last] = ans;
    }
    
    ll getCount(int n) 
    {
      vector<vector<ll>> dp(n + 1, vector<ll> (11, -1));
      vector<vector<int>> adj = 
      {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {1, 2, 4},
        {1, 2, 3, 5},
        {2, 3, 6},
        {1, 4, 5, 7},
        {2, 5, 8, 4, 6},
        {5, 6, 3, 9},
        {4, 7, 8},
        {7, 8, 9, 5, 10},
        {8, 9, 6},
        {10, 8}
      };
      return solve(0, 0, n, dp, adj);
    }
};

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n;
    cin >> n;

    Solution ob;
    cout << ob.getCount(n) << "\n";
  }
  return 0;
}
