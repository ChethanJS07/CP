#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n;
  cin>>n;
  string str;
  cin>>str;
  transform(str.begin(),str.end(),str.begin(),::tolower);
  set<char> s(str.begin(),str.end());
  if(s.size()==26)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}