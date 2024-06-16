#include <bits/stdc++.h>
using namespace std;

class Array 
{
  public:
    template <class T>
    static void input(vector<T> &A, int n) 
    {
      for (int i = 0; i < n; i++) 
      {
        scanf("%d ", &A[i]);
      }
    }

    template <class T>
    static void print(vector<T> &A) 
    {
      for (int i = 0; i < A.size(); i++) 
      {
        cout << A[i] << " ";
      }
      cout << endl;
    }
};

class Solution 
{
  public:
    vector<int> getPrimes(int n) 
    {
        vector<int> arr(n+1,1);
        arr[0]=arr[1]=0;
        int sqrtn=sqrt(n);
        for(int i=2; i<=sqrtn; ++i)
        {
            for(int j=i*2; j<=n; j+=i)
            {
                arr[j]=0;
            }
        }
        for(int i=2; i<n; ++i)
        {
            if(arr[i]==1 && arr[n-i]==1)
            {
                return {i, n-i};
            }
        }
        return {-1, -1};
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
    vector<int> res = obj.getPrimes(n);

    Array::print(res);
  }
}