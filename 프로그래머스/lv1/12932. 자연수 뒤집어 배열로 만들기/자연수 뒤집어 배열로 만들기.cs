public class Solution {
    public int[] solution(long n) {
        string str = n.ToString();
        int[] answer = new int[str.Length];
        int idx = str.Length - 1;
        foreach(char c in str)
        {
            answer[idx--] = c-'0';
        }
        return answer;
    }
}