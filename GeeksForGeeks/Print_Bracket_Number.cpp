#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    vector<int> bracketNumbers(string str) 
    {
      stack<int> st;
      vector<int> ans;
      int p = 1;
      for (int i = 0; i < str.size(); i++) 
      {
        if (str[i] == '(') 
        {
          st.push(p);
          ans.push_back(p);
          p++;
        }
        else if (str[i] == ')') 
        {
          if (st.empty()) 
          {
              ans.push_back(p);
              p++;
          }
          else 
          {
              ans.push_back(st.top());
              st.pop();
          }
        }
      }
      return ans;
    }
};

int main() 
{

  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  string tc;
  getline(cin, tc);
  t = stoi(tc);
  while (t--) 
  {
    string s;
    getline(cin, s);

    Solution ob;

    vector<int> ans = ob.bracketNumbers(s);

    for (auto i : ans)
        cout << i << " ";

    cout << "\n";
  }
  return 0;
}