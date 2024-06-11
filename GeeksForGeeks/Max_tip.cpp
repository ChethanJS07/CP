#include <bits/stdc++.h>
using namespace std;

class Array 
{
  public:
    template <class T>
    static void input(vector<T> &a, int n) 
    {
      for (int i = 0; i < n; i++) 
      {
        scanf("%d ", &a[i]);
      }
    }
    template <class T>
    static void print(vector<T> &a) 
    {
      for (int i = 0; i < a.size(); i++) 
      {
        cout << a[i] << " ";
      }
      cout << endl;
    }
};

class Solution 
{
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) 
    {
      long long s=0;
      for(int i=0;i<n;i++)
      {
        brr[i]=brr[i]-arr[i];
        s=s+arr[i];
      }
      int c=0,i=0;
      sort(brr.begin(),brr.end());
      while(brr[i]<=0&&i<x)
      {
        c++;
        i++;
      }
      i=0;
      while(i<y&&c<n)
      {
        s=s+brr[n-i-1];
        i++;
        c++;  
      }
      return s;
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

    int x;
    scanf("%d", &x);

    int y;
    scanf("%d", &y);

    vector<int> arr(n);
    Array::input(arr, n);

    vector<int> brr(n);
    Array::input(brr, n);

    Solution obj;
    long long res = obj.maxTip(n, x, y, arr, brr);

    cout << res << endl;
  }
}
