#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    int gcd(int a, int b) 
    {
      if (b == 0) 
      {
        return a;
      }
      return gcd(b, a % b);
    }
    
    long long int InternalCount(long long int p[], long long int q[], long long int r[]) 
    {
      long long int p1 = p[0];
      long long int p2 = p[1];
      long long int q1 = q[0];
      long long int q2 = q[1];
      long long int r1 = r[0];
      long long int r2 = r[1];
        
    
      long long int area = abs(p1 * (q2 - r2) + q1 * (r2 - p2) + r1 * (p2 - q2));
      long long int b = gcd(abs(p1 - q1), abs(p2 - q2))
                      + gcd(abs(q1 - r1), abs(q2 - r2))
                      + gcd(abs(r1 - p1), abs(r2 - p2));
      b += 3; 
      long long int I = (area - b + 2) / 2;
      return I+2;
    }
};

int main() 
{
  int t;
  cin >> t;
  while (t--) 
  {
    long long int p[2], q[2], r[2];
    cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1];
    Solution ob;
    long long int ans = ob.InternalCount(p, q, r);
    cout << ans << "\n";
  }
}