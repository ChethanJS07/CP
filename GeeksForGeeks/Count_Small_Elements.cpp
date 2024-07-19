class Solution
{
public:
vector<int> constructLowerArray(vector<int>arr) {
    // code here
   vector<int> ans;
    int n= arr.size();
    vector<int> temp;
    
        for(int i=0;i<n;i++){
            temp.push_back(arr[i]);
        }
        
        sort(temp.begin(),temp.end());
        
        for(int i=0;i<n;i++){
            int index=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
            ans.push_back(index);
            temp.erase(temp.begin()+index);
        }
        return ans;
 
}
};