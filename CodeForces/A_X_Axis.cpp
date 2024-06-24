#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int tot=INT_MAX,sum=0;
    for(int i=1;i<=10;i++)
    {
      sum=abs(x1-i)+abs(x2-i)+abs(x3-i);
      tot=min(sum,tot);
    }
    cout<<tot<<endl;
  }
}