using System;

public class Solution {
    public int solution(int n) {
        int answer = 2;
        for(int i = 2; i <= n-1; i++)
        {
            if(n % i == 1)
            {
                answer = i;
                break;
            }
        }
        return answer;
    }
}