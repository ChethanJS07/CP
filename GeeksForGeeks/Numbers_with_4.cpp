#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    int countNumberswith4(int n) 
    {
      int ans = 0;
      for (int i = 1; i <= n; i++) 
      {
        string temp = to_string(i);  
        if (temp.find("4") != string::npos)
        {
            ans++; 
        }
      }
      return ans;
    }
};

int main() 
{
  int t;
  scanf("%d ", &t);
  while (t--) 
  {
    int n;
    scanf("%d", &n);

    Solution obj;
    int res = obj.countNumberswith4(n);

    cout << res << endl;
  }
}
