#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n;
  cin>>n;
  vector<int>p;
  int x;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    p.push_back(x);
  }
  float vol = (float)accumulate(p.begin(),p.end(),0)/(float)p.size();
  cout<<vol<<endl;
}