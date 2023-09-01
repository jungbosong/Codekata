using System.Collections.Generic;

public class Solution {
    public long solution(long n) {
        long answer = 0;

        List<int> tmpAnswer = new List<int>();
        foreach(char c in n.ToString())
        {
            tmpAnswer.Add((int)c-'0');
        }

        tmpAnswer.Sort((n1, n2) => n2.CompareTo(n1));

        long idx = 1;
        for (int i = tmpAnswer.Count - 1; i >= 0; i--)
        {
            answer += tmpAnswer[i] * idx;
            idx *= 10;
        }
        return answer;
    }
}