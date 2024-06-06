#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  string s,t;
  cin>>s;
  cin>>t;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]!=t[s.length()-i-1])
    {
      cout<<"NO";
      exit(0);
    }
  }
  cout<<"YES";
}