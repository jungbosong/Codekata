using System;
public class Solution {
    public string solution(string s, int n) {
        string answer = "";
       
        foreach(char c in s)
        {
            if(c == ' ')
            {
                answer += " ";
                continue;
            }
            
            int ascii = Convert.ToInt32(c);
            if(ascii <= 90)
            {
                ascii += n;
                if(90 < ascii) ascii = 64 + (ascii - 90);
            }
            else
            {
                ascii += n;
                if(122 < ascii) ascii = 96 + (ascii - 122);
            }
            answer += Convert.ToChar(ascii);
        }
        return answer;
    }
}