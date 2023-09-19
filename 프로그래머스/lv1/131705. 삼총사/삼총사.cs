using System.Collections.Generic;
using System.Linq;

public class Solution
{
    private List<int> answer;
    private int[] number;
    public int solution(int[] number)
    {
        answer = new List<int>();
        this.number = number;

        DFS(0, new bool[number.Length], 0);

        return answer.Where(x => x == 0).Count();
    }

    private void DFS(int depth, bool[] depthCount, int start)
    {
        if (depth == 3)
        {
            int sum = 0;
            for (int i = 0; i < depthCount.Length; i++)
            {
                if (depthCount[i])
                {
                    sum += number[i];
                }
            }
            answer.Add(sum);
        }

        for (int i = start; i < depthCount.Length; i++)
        {
            if (!depthCount[i])
            {
                depthCount[i] = true;
                DFS(depth + 1, depthCount, i);
                depthCount[i] = false;
            }
        }
    }
}