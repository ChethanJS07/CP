#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n;
  cin>>n;
  string s = "";
  string a = "I hate ";
  string b = "I love ";
  for(int i=1;i<=n;i++)
  {
    if(i%2==1)
    {
      s+=a;
    }
    else if(i%2==0)
    {
      s+=b;
    }
    if(i==n)
    {
      s+="it";
    }
    else
    {
      s+="that ";
    }
  }
  cout<<s<<endl;
}