 long long int findMaxProduct(vector<int>&a, int n)
 {
  int countzero = 0;
  int countnegative = 0;
  int largenegative = INT_MIN;
  int check = largenegative;
  const int mod = 1000000007;
  
  long long int productans = 1;
  for(int i =0; i < n; i++)
  {
    if(a[i] == 0) countzero++;
    if(a[i]<0) 
    {
      countnegative++;
      largenegative = max(largenegative, a[i]);
    }
    if(a[i] != 0)
    {
      productans =(productans * a[i])%mod;
    }
  }
  if(countzero == n) return productans;
  if(largenegative != check && countnegative%2 == 1)
      productans /= largenegative;
  return productans % mod ;
}