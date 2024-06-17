class Solution 
{
public:
    bool judgeSquareSum(int c) 
    {
        double b;
        for(int a=0;a<int(sqrt(c))+1;a++)
        {
            b=sqrt(c-a*a);
            if(b==int(b))
            {
                return true;
            }
        }
        return false;
    }
};