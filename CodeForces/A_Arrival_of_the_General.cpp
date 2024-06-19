#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n;
  cin>>n;
  int a[n];
  int max=INT_MIN,min=INT_MAX;
  int h=0,s=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]>max)
    {
      max=a[i];
      h=i;
    }
    if(a[i]<=min)
    {
      min=a[i];
      s=i;
    }
  }
  if(h>s)
  {
    cout<<h+(n-1-s)-1<<endl;
  }
  else
  {
    cout<<h+(n-1-s)<<endl;
  }
}