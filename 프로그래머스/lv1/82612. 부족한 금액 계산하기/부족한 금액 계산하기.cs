using System;

class Solution
{
    public long solution(long price, long money, long count)
    {
        long sum = (count * (2*price + (count-1)*price)) / 2;
        
        if(sum - (long)money <= 0)
        {
            return 0;
        }
        return sum - (long)money;
    }
}