#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int a,b;
  cin>>a>>b;
  int same=0,diff=0;
  diff = min(a,b);
  same = abs(a-b)/2;
  cout<<diff<<" "<<same<<endl;
}