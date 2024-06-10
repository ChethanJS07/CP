#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        vector<char>v={'!','#','$','%','&','*','?','@','^'};
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[nuts[i]]++;
        }
        vector<char>arr;
        for(auto i:v){
            if(mp.find(i)!=mp.end()){
                arr.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            nuts[i]=bolts[i]=arr[i];
        }
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}