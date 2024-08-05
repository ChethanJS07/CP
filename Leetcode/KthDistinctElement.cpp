class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        string ans = "";

        for(string x : arr) {
            mp[x]++;
        }

        for(auto& s : arr) {
            if(mp[s] == 1 && --k == 0)
                return s;
        }
 
        return "";
    }
};