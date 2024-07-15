class Solution {
  public:
    int sum(int num)
     {
         int cnt=0;
         while(num!=0) {
             int t=num%10;
             num=num/10;
             cnt+=t;
         }
         return cnt;
     }
     int countdigit(int num) {
         int cnt=0;
         while(num!=0)
          {
              int t=num%10;
              num=num/10;
              cnt++;
          }
          return cnt;
     }
    string smallestNumber(int s, int d) {
        string ans="";
        int num=1;
        for(int i=1;i<d;i++)
        {
            num=num*10;
        }
        while(countdigit(num)==d)
        {
            if(sum(num)==s)
             {
               ans=to_string(num);
                return ans;
             }
            num+=1;
        }
         return to_string(-1);
    }
};