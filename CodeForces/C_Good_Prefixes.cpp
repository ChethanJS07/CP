#include<bits/stdc++.h>
using namespace std;

bool good(vector<long long> a, int k)
{
  long long sum=0;
  for(int i=0;i<=k;i++)
  {
    sum+=a[i];
  }
  
  for(int i=0;i<=k;i++)
  {
    if(sum-a[i]==a[i])
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<long long>a;
    long long x;
    int count=0;
    for(int i=0;i<n;i++)
    {
      cin>>x;
      a.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
      if(good(a,i))
      {
        count++;
      }
    }
    cout<<count<<"\n";
  }
}

