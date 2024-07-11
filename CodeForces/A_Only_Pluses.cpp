#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=0;i<5;i++)
    {
      if((a+1)*b*c >= (b+1)*a*c && (a+1)*b*c >= (c+1)*a*b)
      {
        a+=1;
      }
      else if((b+1)*a*c >= (a+1)*b*c && (b+1)*a*c>=(c+1)*a*b)
      {
        b+=1;
      }
      else
      {
        c+=1;
      }
    }
    cout<<a*b*c<<endl;
  }
}