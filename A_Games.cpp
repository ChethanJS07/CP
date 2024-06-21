#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n;
  cin>>n;
  int tot=0;
  vector<int>home;
  vector<int>away;
  while(n--)
  {
    int h,a;
    cin>>h>>a;
    home.push_back(h);
    away.push_back(a);
  }
  for(int i=0;i<home.size();i++)
  {
    for(int j=0;j<away.size();j++)
    {
      if(home[i]==away[j])
      {
        tot++;
      }
    }
  }
  cout<<tot<<endl;
}