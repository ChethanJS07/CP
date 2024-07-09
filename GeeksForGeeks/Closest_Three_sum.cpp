class Solution 
{
  public:
    int threeSumClosest(std::vector<int>& arr, int target) 
    { 
      sort(arr.begin(), arr.end());
      int prevDiff = INT_MAX; 
      int closestSum = INT_MIN; 
      for(int i = 0; i < arr.size() - 2; i++)
      {
        int start = i + 1; 
        int end = arr.size() - 1; 
        while(start < end)
        {
          int sum = arr[i] + arr[start] + arr[end]; 
          if(sum == target) return sum;
          int currentDiff = abs(sum - target);
          if(currentDiff < prevDiff || (currentDiff == prevDiff && sum > closestSum))
          {
            prevDiff = currentDiff;
            closestSum = sum;
          }
          if(sum < target)
          {
            start++;
          }
          else
          {
            end--;
          }
        }
      }
      return closestSum;
    }
};