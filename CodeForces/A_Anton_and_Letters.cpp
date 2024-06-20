#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  string s;
  getline(cin,s);
  set<char>a(s.begin(),s.end());
  a.erase('{');
  a.erase(',');
  a.erase(' ');
  a.erase('}');
  cout<<a.size()<<endl;
}