#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  string g,h,l;
  cin>>g;
  cin>>h;
  cin>>l;
  string gh = g+h;
  sort(gh.begin(),gh.end());
  sort(l.begin(),l.end());
  if(gh==l)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}