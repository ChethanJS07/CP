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
    string a="";
    cin>>a;
    int tot=0;
    int v[7]={0,0,0,0,0,0,0};
    for(int i=0;i<n;i++)
    {
      if(a[i]=='A')
      {
        v[0]+=1;
      }
      else if(a[i]=='B')
      {
        v[1]+=1;
      }
      else if(a[i]=='C')
      {
        v[2]+=1;
      }
      else if(a[i]=='D')
      {
        v[3]+=1;
      }
      else if(a[i]=='E')
      {
        v[4]+=1;
      }
      else if(a[i]=='F')
      {
        v[5]+=1;
      }
      else if(a[i]=='G')
      {
        v[6]+=1;
      }
    }
    for(int i=0;i<7;i++)
    {
      if(v[i]<m)
      {
        tot+=(m-v[i]);
      }
    }
    cout<<tot<<"\n";
  }
}