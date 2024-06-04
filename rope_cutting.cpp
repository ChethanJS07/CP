#include<bits/stdc++.h>
using namespace std;

int max(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>a && b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}

int rope(int n,int a,int b,int c)
{
  if(n<0)
  {
    return -1;
  }
  else if(n==0)
  {
    return 0;
  }
 
  int p1=rope(n-a,a,b,c);
  int p2=rope(n-b,a,b,c);
  int p3=rope(n-c,a,b,c);
  int count=max(p1,p2,p3);
  if(count==-1)
  {
    return -1;
  }
  else
  {
    return count+1;
  }
}

int main()
{
  int n,a,b,c;
  cin>>n;
  cin>>a>>b>>c;
  cout<<rope(n,a,b,c);
}
