//Sort function passed only 1114/1115 test cases

class Solution 
{
  public:
    void segregate0and1(vector<int> &arr) 
    {
      int n = arr.size();
      int i =0;
      int j =n-1;
      while(j> i)
      {
        if(arr[i]==1 && arr[j]==0)
        {
          swap(arr[j],arr[i]);
          i++;
          j--;
        }
        else if(arr[i] ==1 && arr[j]== 1)
        {
          j--;
        }
        else if(arr[i] ==0 && arr[j]== 0)
        {
          i++;
        }
        else
        {
          i++;
          j--;
        }
      }
    }
};