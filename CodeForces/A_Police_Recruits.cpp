#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,x,p=0,c=0;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  for(auto num:v)
  {
    if(num==-1)
    {
      if(p==0)
      {
        c++;
      }
      else
      {
        p--;
      }
    }
    else
    {
      p+=num;
    }
  }
  cout<<c<<endl;
}