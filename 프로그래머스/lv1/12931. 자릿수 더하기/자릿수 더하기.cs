using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        string tmp = n.ToString();
        foreach(char c in tmp)
        {
            answer += (int)c-'0';
        }
        return answer;
    }
}