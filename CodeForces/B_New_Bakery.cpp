#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n,a,b;
    cin>>n>>a>>b;
    long long i=1,tot=0;
    if(b<a)
    {
      tot=n*a;
    }
    else
    {
      long long k = min(n, b - a);
      tot = k * (2 * b - k + 1) / 2 + (n - k) * a;
    }
    cout<<tot<<endl;
  }
}