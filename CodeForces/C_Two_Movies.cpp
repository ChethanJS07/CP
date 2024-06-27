#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t,x;
  cin>>t;
  while(t--)
  {
    int n,s1=0,s2=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]>b[i])
      {
        s1+=a[i];
      }
      if(a[i]<b[i])
      {
        s2+=b[i];
      }
    }
    for(int i=0;i<n;i++)
    {
      if(a[i]==b[i] && a[i]>=0)
      {
        (s1<=s2)?s1+=a[i]:s2+=b[i];
      }
      else if(a[i]==b[i] && a[i]<0)
      {
        (s1>=s2)?s1+=a[i]:s2+=b[i];
      }
    }
    cout<<min(s1,s2)<<endl;
  }
}