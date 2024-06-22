#include<bits/stdc++.h>
using namespace std;
          
int main()
{
  vector<int>nums={1,2,3,4};
  int count=0;
  for(int i=0;i<4;i++)
  {
    if(nums[i]%3!=0)
    {
      count++;
    }
  }
  cout<<count<<endl;
}