#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tot=0;
    cin>>n;
    while(n--)
    {
      int a=0,b=0,c=0;
      cin>>a>>b>>c;
      if(a+b+c>=2)
      {
        tot++;
      }
    }
    cout<<tot<<endl;
}