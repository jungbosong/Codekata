using System;

public class Solution {
    public string solution(string s) 
    {
        char[] str_arr = s.ToCharArray();
        
        int wordIdx = 0;
        for(int i = 0; i < s.Length; i++)
        {
            if(str_arr[i] == ' ')
            {
                wordIdx = 0;
                continue;
            }
            if(wordIdx % 2 == 0)
            {
                str_arr[i] = char.ToUpper(str_arr[i]);
            }
            else
            {
                str_arr[i] = char.ToLower(str_arr[i]);
            }
            wordIdx++;
        }
        return new string(str_arr);
    }
}