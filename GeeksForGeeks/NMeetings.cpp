class Solution 
{
public:
  int maxMeetings(int n, int start[], int end[]) 
  {
    vector<vector<int>>tmp;
    for(int i=0; i<n; i++)
    {
      tmp.push_back({end[i], start[i]});
    }
    sort(tmp.begin(), tmp.end());
    
    int ans=0;
    int prev_end=-1;
    for(int i=0; i<n; i++)
    {
      int cur_start=tmp[i][1];
      int cur_end=tmp[i][0];
      
      if(cur_start>prev_end)
      {
        ans++;
        prev_end=cur_end;
      }
    }
    return ans;
  }
};