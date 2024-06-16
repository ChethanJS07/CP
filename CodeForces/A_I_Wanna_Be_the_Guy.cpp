#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n;
  cin>>n;
  int p,q;
  vector<int>a;
  vector<int>b;
  set<int>c;
  int x;
  cin>>p;
  for(int i=0;i<p;i++)
  {
    cin>>x;
    a.push_back(x);
  }
  cin>>q;
  for(int i=0;i<q;i++)
  {
    cin>>x;
    b.push_back(x);
  }
  for(int i=0;i<a.size();i++)
  {
    c.insert(a[i]);
  }
  for(int i=0;i<b.size();i++)
  {
    c.insert(b[i]);
  }
  if(c.size()==n)
  {
    cout<<"I become the guy."<<endl;
  }
  else
  {
    cout<<"Oh, my keyboard!"<<endl;
  }
}