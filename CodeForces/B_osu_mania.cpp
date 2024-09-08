#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int k=0;
    vector<string>input(n);
    vector<int>index;
    for(int i=0;i<n;i++)
    {
      cin>>input[i];
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<input[i].length();j++)
      {
        if(input[i][j]=='#')
        {
          index.push_back(j+1);
        }
      }
    }
    reverse(index.begin(),index.end());
    for(auto it : index)
    {
      cout<<it<<" ";
    }
    cout<<endl;
  }
}