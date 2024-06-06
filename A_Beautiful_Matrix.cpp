#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int a[5][5];
  int m,n;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<5;j++)
    {
      cin>>a[i][j];
      if(a[i][j]==1)
      {
        m=i+1;
        n=j+1;
      }
    }
  }
  cout<<abs(m-3)+abs(n-3);
}