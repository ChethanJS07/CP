#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,f,k,tot=0;
    cin>>n>>f>>k;
    vector<int>a;
    vector<int>b(n,0);
    for(int i=0;i<n;i++)
    {
      int c;
      cin>>c;
      a.push_back(c);
    }
    int fav = a[f-1];
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<k;i++)
    {
      b[i]=a[i];
      a[i]=0;
    }
    int ca=0,cb=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==fav)
      {
        ca++;
      }
      if(b[i]==fav)
      {
        cb++;
      }
    }
    if(ca!=0 && cb!=0)
    {
      cout<<"MAYBE"<<"\n";
    }
    else if(ca==0 && cb!=0)
    {
      cout<<"YES"<<"\n";
    }
    else if(ca!=0 && cb==0)
    {
      cout<<"NO"<<"\n";
    }
    
  }
}  

