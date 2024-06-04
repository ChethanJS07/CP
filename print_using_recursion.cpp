#include<bits/stdc++.h>
using namespace std;

void print(int[],int);

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  print(arr,n);
}

void print(int arr[],int n)
{
  static int i=0;
  if(n==0)
  {
    i=0;
    exit(0);
  }
  else
  {
    cout<<arr[i]<<" ";
    i++;
    print(arr,n-1);
  }
}