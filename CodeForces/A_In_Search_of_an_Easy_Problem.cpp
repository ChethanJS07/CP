#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n;
  cin>>n;
  vector<int>v;
  int x;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  if(count(v.begin(),v.end(),1)==0)
  {
    cout<<"EASY"<<endl;
  }
  else
  {
    cout<<"HARD"<<endl;
  }
}