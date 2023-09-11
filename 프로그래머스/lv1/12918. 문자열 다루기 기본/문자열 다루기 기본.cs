public class Solution {
    public bool solution(string s) {
        bool answer = true;
        
        if(s.Length == 4 || s.Length == 6)
        {
            foreach(char c in s.ToCharArray())
            {
                if((int)c-'0' < 0 || (int)c-'0' > 9)
                {
                    return answer = false;
                }
            }
        }
        else
        {
            answer = false;
        }
        return answer;
    }
}