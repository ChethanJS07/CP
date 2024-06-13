#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    char a[n][m];
    vector<int>r;
    vector<int>c;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        cin>>a[i][j];
        if(a[i][j]=='#')
        {
          r.push_back(i+1);
          c.push_back(j+1);
        }
      }
    }
    if(r.size()==1)
    {
      cout<<r[0]<<" ";
      cout<<c[0]<<"\n";
    }
    else
    {
      cout<<r[r.size()/2]<<" ";
      cout<<c[c.size()/2]<<"\n";
    }
  }
}