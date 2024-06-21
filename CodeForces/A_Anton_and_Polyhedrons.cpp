#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n;
  cin>>n;
  int tot=0;
  while(n--)
  {
    string s;
    cin>>s;
    int t;
    if(s=="Tetrahedron")
    {
      t=1;
    }
    else if(s=="Cube")
    {
      t=2;
    }
    else if(s=="Octahedron")
    {
      t=3;
    }
    else if(s=="Dodecahedron")
    {
      t=4;
    }
    else
    {
      t=5;
    }
    switch(t)
    {
      case 1:
        tot+=4;
        break;
      case 2:
        tot+=6;
        break;
      case 3:
        tot+=8;
        break;
      case 4:
        tot+=12;
        break;
      case 5:
        tot+=20;
        break;
    }
  }
  cout<<tot<<endl;
}