#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    int padovanSequence(int n)
    { 
      if(n==1 || n==2) return 1;
      vector<int> arr(n+1,-1);
      arr[0]=arr[1]=arr[2]=1;
      for(int i=3;i<=n;i++)
      {
          arr[i]=(arr[i-2]+arr[i-3])%1000000007;
      }
      return arr[n]%1000000007;
    }
};

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    Solution ob;
    cout<<ob.padovanSequence(n)<<endl;
  }
  return 0;
}