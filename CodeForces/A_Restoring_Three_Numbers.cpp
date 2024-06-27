#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  int x1,x2,x3,x4;
  cin>>x1>>x2>>x3>>x4;
  vector<int>v(4);
  v.push_back(x1);
  v.push_back(x2);
  v.push_back(x3);
  v.push_back(x4);
  sort(v.begin(),v.end(),greater<int>());
  cout<<v[0]-v[1]<<" "<<v[0]-v[2]<<" "<<v[0]-v[3]<<endl;
}