#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int n,m;
  cin>>n>>m;
  int c=0;
  for(int i=0;i<n;i++)
  {
    if(i%2==0)
    {
      for (int i = 0; i < m; ++i) 
      {
        cout << '#';
      }
      cout<<endl;
    }
    else if(i%2==1)
    {
      if(c==0)
      {
        for (int i = 0; i < m-1; ++i) 
        {
          cout << '.';
        }
        cout<< '#' << endl;
        c=1;
      }
      else if(c==1)
      {
        cout << '#';
        for (int i = 0; i < m - 1; ++i) 
        {
          cout << '.';
        }
        cout<<endl;
        c=0;
      }
    }
  }
}