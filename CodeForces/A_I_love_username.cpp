#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n,x,count=0;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  int h=v[0],l=v[0];
  for(auto num: v)
  {
    if(num<l)
    {
      l=num;
      count++;
    }
    else if(num>h)
    {
      h=num;
      count++;
    }
  }
  cout<<count<<endl;
}