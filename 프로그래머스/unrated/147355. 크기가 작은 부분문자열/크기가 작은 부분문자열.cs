using System;

public class Solution {
    public int solution(string t, string p) {
        int answer = 0;
        long pNum = long.Parse(p);
        
        for(int i = 0; i <= t.Length - p.Length; i++)
        {
            if(long.Parse(t.Substring(i,p.Length)) <= pNum)
                answer++;
        }
        return answer;
    }
}