#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    string armstrongNumber(int n) 
    {
      int num = n;
      int tot=0;
      while(n>0)
      {
          tot+=pow(n%10,3);
          n/=10;
      }
      if(num==tot)
      {
          return "true";
      }
      else
      {
          return "false";
      }
    }
};

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    int n;
    cin >> n;
    Solution ob;
    cout << ob.armstrongNumber(n) << endl;
  }
  return 0;
}
