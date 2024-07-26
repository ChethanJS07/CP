class Solution {
  public:
    bool kPangram(string str, int k) {
        vector<int>arr(26);
        for (char ch: str){
            if (ch == ' ') continue;
            arr[ch - 'a']+=1; 
        }
        int nhi_hai = 0;
        int space_for_alpha = 0; 
        for (int i=0; i< 26; i++){
            if (arr[i] > 1) space_for_alpha += (arr[i]-1);
            if (!arr[i]) nhi_hai+=1;
        }
        
        return nhi_hai <= space_for_alpha && nhi_hai <= k;
    }
};