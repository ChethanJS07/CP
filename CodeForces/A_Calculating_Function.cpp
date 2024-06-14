#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  long long n;
  cin>>n;
  long long tot=0;
  if(n%2==0)
  {
    tot=n/2;
  }
  else
  {
    tot= -1*(n/2+1);
  }
  cout<<tot<<endl;
}