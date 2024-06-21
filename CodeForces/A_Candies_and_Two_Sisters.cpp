#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin>>n;
    (n%2)?(cout<<n/2<<endl):(cout<<n/2-1<<endl);
  }
}