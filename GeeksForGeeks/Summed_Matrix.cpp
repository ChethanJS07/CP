#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    long long sumMatrix(long long n, long long q) 
    {
      if(q>2*n) return 0;
      long long count  = n, mid = n+1;
      long long number = mid>q?mid-q:q-mid;
      return n-number;
    }
};

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    long long n,q;
    
    cin>>n>>q;

    Solution ob;
    cout << ob.sumMatrix(n,q) << endl;
  }
  return 0;
}