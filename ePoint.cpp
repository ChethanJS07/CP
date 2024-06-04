#include<bits/stdc++.h>
using namespace std;

int ePoint(int[],int);

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<ePoint(arr,n);
}

int ePoint(int arr[],int n)
{
  int pr[n];
  pr[0]=arr[0];
  for(int i=1;i<n;i++)
  {
    pr[i]=pr[i-1]+arr[i];
  }
  int ls=0,rs=0;
  for(int i=0;i<n;i++)
  {
    ls = pr[i]-arr[i];
    rs = pr[n-1]-pr[i];
    if(ls==rs)
    {
      return 1;
    }
  }
  return 0;
}