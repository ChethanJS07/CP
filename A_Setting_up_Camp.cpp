#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long  a,b,c;
    cin>>a>>b>>c;
    long long tot=a+b/3;
    int t1=b%3;
    if(t1==0)
    {
      if(c==0)
      {
        tot+=c/3;
      }
      else
      {
        tot+=c/3+1;
      }
    }
    else if(c>=2)
    {
      if(t1==1)
      {
        if(c-2==0)
        {
          tot+=1+(c-2)/3;
        }
        else
        {
          tot+=1+(c-2)/3+1;
        }
      }
      else if(t1==2)
      {
        tot+=1+(c-1)/3+1;
      }
    }
    else
    {
      tot=-1;
    }
    cout<<tot<<"\n";
  }
}