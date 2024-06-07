#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxOccured(int n, int l[], int r[], int maxx) 
    {
        vector<int>arr(maxx+2,0);
        for(int i=0;i<n;i++)
        {
            arr[l[i]]++;
            arr[r[i]+1]--;
        }
        
        int sum=0;
        for(int i=0;i<=maxx;i++)
        {
            arr[i]+=sum;
            sum=arr[i];
        }
        
        int ans=0;
        for(int i=1;i<=maxx;i++)
        {
            if(arr[i]>arr[ans])
            {
                ans=i;
            }
        }
        return ans;
    }
};

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int l[n];
        int r[n];
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        int maxx = 0;
        for (int i = 0; i < n; i++) {

            cin >> r[i];
            if (r[i] > maxx) {
                maxx = r[i];
            }
        }
        Solution ob;
        cout << ob.maxOccured(n, l, r, maxx) << endl;
    }

    return 0;
}