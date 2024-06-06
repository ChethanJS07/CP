#include<bits/stdc++.h>
using namespace std;
          
int main()
{
    int n,x=0;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
      string c;
      cin>>c;
      v.push_back(c);
    }
    for(int i=0;i<n;i++)
    {
      if(v[i]=="++X")
      {
        x++;
      }
      else if(v[i]=="--X")
      {
        x--;
      }
      else if(v[i]=="X++")
      {
        x++;
      }
      else if(v[i]=="X--")
      {
        x--;
      }
    }
    cout<<x;
}