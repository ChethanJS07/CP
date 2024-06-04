#include<bits/stdc++.h>
using namespace std;

int max(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

int findWinner(int n,int x,int y)
{
  vector<int> dp(n + 1, 0);
  dp[0] = 0;
  for (int i = 1; i <= n; ++i) 
  {
    if (i >= 1 && !dp[i - 1]) 
    {
        dp[i] = 1;
    }
    if (i >= x && !dp[i - x]) 
    {
        dp[i] = 1;
    }
    if (i >= y && !dp[i - y]) 
    {
        dp[i] = 1;
    }
    cout<<"dp["<<i<<"] : "<<dp[i]<<"\n";
  }
  for(int i=0;i<n+1;i++)
  {
    cout<<dp[i]<<" ";
  }
  cout<<"\n";
  return dp[n];
}

int main()
{
  int n,x,y;
  cin>>n;
  cin>>x>>y;
  cout<<findWinner(n,x,y);
}