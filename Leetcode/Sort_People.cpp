class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> map;
        for (int i = 0; i < names.size(); i++) {
            map[heights[i]] = names[i];
        }
        
        sort(heights.begin(), heights.end());
        vector<string> result(heights.size());
        int index = 0;
        
        for (int i = heights.size() - 1; i >= 0; i--) {
            result[index] = map[heights[i]];
            index++;
        }
        
        return result;
    }
};