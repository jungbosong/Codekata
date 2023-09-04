using System;

public class Solution {
    public int solution(int[] numbers) {
        int answer = 0;
        bool[] exist = {false, false, false, false, false, false, false, false, false, false};
        
        foreach(int num in numbers)
        {
            exist[num] = true;
        }
        
        for(int i = 1; i <= 9; i++)
        {
            if(!exist[i])
            {
                answer += i;
            }
        }
        return answer;
    }
}