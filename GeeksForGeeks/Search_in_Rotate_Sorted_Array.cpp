class Solution 
{
  public:
    int fn(vector<int>& A, int h)
    {
      int s = 0, e = h;
      int mid = s+(e-s)/2;
      while(s<e)
      {
        if(A[mid] >= A[0])
        {
          s = mid+1;
        }
        else
        {
          e = mid;
        }
        mid = s+(e-s)/2;
      }
      return s;
    }
    int bs(vector<int>& A, int s, int e, int key)
    {
      int st  = s;
      int en = e;
      int mid = st + (en-st)/2;
          while(st<=en)
          {
            if(A[mid] == key)
                return mid;
            if(A[mid] < key)
                st = mid + 1;
            else
                en = mid - 1;
            mid = st + (en-st)/2;
      }
      return -1;
    }
    int search(vector<int>& arr, int key) 
    {
      int n = arr.size();
      int piv = fn(arr, n);
      if(piv==n)
          piv = 0;
      if(key>=arr[piv] and key<=arr[n-1] )
          return bs(arr, piv, n, key);
      return bs(arr, 0, piv-1, key);
    }
};