using System;
using System.Linq;

public class Solution {
    public string solution(int[] food) {
        string answer = "";
        int waterIdx = 0;
        
        for(int i = 1; i < food.Length; i++)
        {
            for(int j = 0; j < food[i]/2; j++)
            {
                answer += i.ToString();
                waterIdx++;
            }
        }
        
        answer += "0";
        answer += new string(answer.Reverse().ToArray());
        
        answer = answer.Remove(waterIdx,1);
        
        return answer;
    }
}