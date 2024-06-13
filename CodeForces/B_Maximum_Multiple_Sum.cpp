#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int tot=0;
    int val=0;
    for(int i=2;i<=n;i++)
    {
      int k=n/i;
      int sum = (k*(k+1)*i)/2;
      if(tot<=sum)
      {
        tot=sum;
        val=i;
      }
    }
    cout<<val<<"\n";
  }
}