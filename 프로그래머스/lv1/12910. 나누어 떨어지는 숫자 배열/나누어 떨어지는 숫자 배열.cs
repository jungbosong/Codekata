using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] arr, int divisor) {
        List<int> tmp = new List<int>();
        
        foreach(int num in arr)
        {
            if(num % divisor == 0)
            {
                tmp.Add(num);
            }
        }
        
        tmp.Sort();
        int[] answer = new int[tmp.Count + 1];
        
        if(tmp.Count == 0)
        {
            answer[0] = -1;
        }
        else
        {
            answer = tmp.ToArray();
        }
        return answer;
    }
}