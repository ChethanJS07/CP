#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    int res = abs(b-a);
    if(res%10==0)
    {
      cout<<res/10<<endl;
    }
    else
    {
      cout<<res/10+1<<endl;
    }
  }
}