#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,tot=INT_MAX;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  for(int i=0;i<n;i++)
  {
    int count=0;
    while(v[i]%2==0)
    {
      v[i]/=2;
      count++;
    }
    tot=min(tot,count);
  }
  cout<<tot;
}