#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int k,l,m,n,d;
  cin>>k;
  cin>>l;
  cin>>m;
  cin>>n;
  cin>>d;
  vector<int>a(d,0);
  for(int i=1;i<=d;i++)
  {
    if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
    {
      a[i-1]=1;
    }
  }
  cout<<count(a.begin(),a.end(),1)<<endl;
}