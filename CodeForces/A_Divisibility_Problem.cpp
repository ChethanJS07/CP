#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b;
    cin>>a>>b;
    int n = a/b;
    int count;
    if(a%b==0)
    {
      count=(n)*b-a;
    }
    else
    {
      count=(n+1)*b-a;
    }
    cout<<count<<endl;
  }
}