class Solution 
{
  public:
    int n;
    double sum(int i, double prepare, vector<vector<int>>& customers)
    {   
      if (i>=n) return 0;
      auto& t=customers[i];
      prepare=max(prepare, (double)t[0])+t[1];
      return prepare-t[0]+sum(i+1, prepare, customers);
    }
    double averageWaitingTime(vector<vector<int>>& customers) 
    {
      n=customers.size();
      return sum(0, 0, customers)/n;
    }
};