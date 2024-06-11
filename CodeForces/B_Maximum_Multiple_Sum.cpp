#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,ans;
    cin>>n;
    int tot=0;
    for(int i=2;i<=n;i++)
    {
      int curr=0;
      int j=1;
      while(i*j<=n)
      {
        curr+=i*j;
        j++;
      }
      if(curr>=tot)
      {
        tot=curr;
        ans=i;
      }
    }
    cout<<ans<<"\n";
  }
}