using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int n) {
        List<int> triList = new List<int>();
        int remain = n;
        while(remain > 0)
        {
            triList.Add(remain % 3);
            remain /= 3;
        }
        
        int answer = 0;
        for(int i = 0; i < triList.Count; i++)
            answer += (int)Math.Pow(3, triList.Count - i - 1) * triList[i];
        
        return answer;
    }
}