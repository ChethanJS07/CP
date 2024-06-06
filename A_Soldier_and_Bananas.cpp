#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int k,n,w;
  cin>>k>>n>>w;
  int tot=0;
  for(int i=1;i<=w;i++)
  {
    tot+=i*k;
  }
  if(tot<n)
  {
    cout<<0;
  }
  else
  {
    cout<<tot-n;
  }
}