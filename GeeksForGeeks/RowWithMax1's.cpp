class Solution 
{
 public:
  int rowWithMax1s(vector<vector<int> > &arr) 
  {
    int mini=0;
    int row = arr.size();
    int col = arr[0].size();
    int ans=-1;
    for(int i=0;i<row;i++)
    {
        int cnt=0;
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==1)
                cnt++;
        }
        if(mini<cnt)
        {
            mini = cnt;
            ans = i;
        }
        cnt=0;
    }
    return ans;
   }
};