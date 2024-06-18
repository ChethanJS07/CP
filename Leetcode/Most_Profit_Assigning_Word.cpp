class Solution 
{
public:
  int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) 
  {
    vector<pair<int, int>> infos;
    for (int i = 0; i < difficulty.size(); i++) 
    {
      infos.emplace_back(difficulty[i], profit[i]);
    }
    sort(infos.begin(), infos.end());
    
    vector<pair<int, int>> maxProfitForDifficulty;
    int maxp = 0;
    for (auto& info : infos) 
    {
      int d = info.first, p = info.second;
      maxp = max(maxp, p);
      maxProfitForDifficulty.emplace_back(d, maxp);
    }
    
    int totalProfit = 0;
    for (int w : worker) 
    {
      int ind = binarySearch(maxProfitForDifficulty, w);
      if (ind >= 0 && w >= maxProfitForDifficulty[ind].first) 
      {
        totalProfit += maxProfitForDifficulty[ind].second;
      }
    }
    return totalProfit;
  }
    
private:
  int binarySearch(vector<pair<int, int>>& list, int target) 
  {
    int left = 0, right = list.size() - 1;
    while (left <= right) 
    {
      int mid = left + (right - left) / 2;
      if (list[mid].first <= target) 
      {
          left = mid + 1;
      } else {
          right = mid - 1;
      }
    }
    return right;
  }
};