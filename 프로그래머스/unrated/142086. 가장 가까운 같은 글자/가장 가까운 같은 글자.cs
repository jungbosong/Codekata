using System;

public class Solution {
    public int[] solution(string s) {
        int[] answer = new int[s.Length];
        int[] preAlphabetIdx = new int[26];
        
        Array.Fill(preAlphabetIdx, -1);
        
        for(int i = 0; i < s.Length; i++)
        {
            if(preAlphabetIdx[s[i]-'a'] == -1)
            {
                preAlphabetIdx[s[i]-'a'] = i;
                answer[i] = -1;
            }
            else
            {
                answer[i] = i - preAlphabetIdx[s[i]-'a'];
                preAlphabetIdx[s[i]-'a'] = i;
            }
        }
        return answer;
    }
}