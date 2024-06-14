#include<bits/stdc++.h>
using namespace std;
          
int fn(vector<int>& v) 
{
  sort(v.begin(), v.end());
  int count = 0;
  for (int i = 1; i < v.size(); i++) 
  {
      if (v[i] <= v[i-1]) 
      {
          count += (v[i-1] - v[i] + 1);
          v[i] = v[i-1] + 1;
      }
  }
  return count;
}
  
int main()
{
  vector<int>v;
  int x;
  for(int i=0;i<4;i++)
  {
    cin>>x;
    v.push_back(x);
  }
  cout<<fn(v)<<endl;
}
