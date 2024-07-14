#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,count=0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n-1;i++)
    {
      if(abs(v[i]-v[i+1])<=1)
      {
        count++;
      }
    }
    cout<<((count==n-1)?("YES"):("NO"))<<endl;
  }
}
