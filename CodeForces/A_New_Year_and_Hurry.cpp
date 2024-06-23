#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n,k,sum=0;
  cin>>n>>k;
  int i=1;
  while(i<=n)
  {
    if(5*i+k+sum<=240)
    {
      sum+=5*i;
      i++;
    }
    else
    {
      break;
    }
  }
  cout<<i-1<<endl;
}