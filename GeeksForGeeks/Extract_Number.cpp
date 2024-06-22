#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    long long ExtractNumber(string sent) 
    {
      sent.push_back('#');
      long long ans=-1;
      long long num=0;
      bool istrue=false;
      for(int i=0;i<sent.length();i++)
      {
        if(sent[i]>='0' && sent[i]<='9')
        {
          num=num*10+(sent[i]-'0');
          if(sent[i]=='9')
          istrue=true;
        }
        else
        {
            
          if(istrue==true)
          {
            istrue=false;
          }
          else
          {
            if(num!=0)
            ans=max(ans,num);
          }
          num=0;
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
    cout << ob.ExtractNumber(s) << "\n";
  }

  return 0;
}
