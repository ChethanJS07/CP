#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n,a,b;
  int diff=0;
  int tot=0;
  cin>>n;
  while(n--)
  {
    cin>>a>>b;
    diff = diff-a+b;
    tot = max(tot,diff);
  }
  cout<<tot;
}