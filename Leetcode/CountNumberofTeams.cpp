class Solution 
{
  public:
      int numTeams(vector<int>& ratings) {
          int maxRating = 0;
          for (int rating : ratings) {
              maxRating = max(maxRating, rating);
          }

          vector<int> leftBIT(maxRating + 1, 0);
          vector<int> rightBIT(maxRating + 1, 0);

          for (int rating : ratings) {
              updateBIT(rightBIT, rating, 1);
          }

          int teams = 0;
          for (int currentRating : ratings) 
          {
            updateBIT(rightBIT, currentRating, -1);

            int smallerRatingsLeft = getPrefixSum(leftBIT, currentRating - 1);
            int smallerRatingsRight = getPrefixSum(rightBIT, currentRating - 1);
            int largerRatingsLeft = getPrefixSum(leftBIT, maxRating) -
                                    getPrefixSum(leftBIT, currentRating);
            int largerRatingsRight = getPrefixSum(rightBIT, maxRating) -
                                    getPrefixSum(rightBIT, currentRating);

            teams += (smallerRatingsLeft * largerRatingsRight);
            teams += (largerRatingsLeft * smallerRatingsRight);

            updateBIT(leftBIT, currentRating, 1);
          }

          return teams;
      }

  private:
    void updateBIT(vector<int>& BIT, int index, int value) 
    {
      while (index < BIT.size()) 
      {
        BIT[index] += value;
        index +=
            index & (-index); 
      }
    }

    int getPrefixSum(vector<int>& BIT, int index) 
    {
      int sum = 0;
      while (index > 0) 
      {
        sum += BIT[index];
        index -= index & (-index);
      }
      return sum;
    }
};