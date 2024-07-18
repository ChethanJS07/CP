class Solution {
  public:
  int solver(vector<int>& arr , int ind ,int isUp , vector<vector<int>>&dp )
  {
      //base case
      
      if(ind==0) return 1;
      if(dp[ind][isUp] != -1) return dp[ind][isUp];
      
     int take = INT_MIN;
     if(isUp)
     {
          if(arr[ind-1]<arr[ind]) 
            take = 1+ solver(arr, ind-1 ,0, dp);
     } else
      {
         if(arr[ind-1]>arr[ind]) 
         { 
              take = 1+solver(arr, ind-1,1, dp);
         }
      }
     
     int not_take = solver(arr, ind-1, isUp, dp);
     return dp[ind][isUp]=  max(take, not_take);
       
  }
    int alternatingMaxLength(vector<int>& arr) {
        // Code here
        int n= arr.size();
        vector<vector<int>>dp(n,vector<int>(2, -1));
        return max(solver(arr,n-1,1, dp), solver(arr,n-1,0, dp));
    }
};