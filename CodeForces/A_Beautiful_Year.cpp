#include<bits/stdc++.h>
using namespace std;
bool check(int x)
{
  set<int>s;
  while(x)
  {
    int r = x%10;
    if(s.count(r))
    return false;
    
    s.insert(r);
    
    x=x/10;
  }
  return true;
}
int main()
{
  int n;
  cin>>n;
  for(int i=n+1;;i++)
  {
      if(check(i))
      {cout<<i;
      break;
      }
  }
  return 0;
}