public class Solution {
    public string solution(string s) {
        int start = s.Length/2;
        int end = 1;
        if(s.Length % 2 == 0)
        {
            start--;
            end++;
        }
        return s.Substring(start, end);
    }
}